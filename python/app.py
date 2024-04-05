from flask import Flask, render_template, request
import mysql.connector
import bcrypt

app = Flask(__name__, template_folder='../../social-media-dashboard-with-theme-switcher-master', static_folder='../css')

connection = mysql.connector.connect(
    host='localhost',
    user='root',
    password='password',
    database='users_data'
)

def check_password(entered_password, hashed_password):
    # Check if the entered password matches the hashed password
    return bcrypt.checkpw(entered_password.encode('utf-8'), hashed_password.encode('utf-8'))

def hash_password(password):
    # Hash a password using bcrypt
    hashed_password = bcrypt.hashpw(password.encode('utf-8'), bcrypt.gensalt())
    return hashed_password.decode('utf-8')  # Decode bytes to string for storage

@app.route('/')
def index():
    return render_template('signup.html')

@app.route('/register', methods=['POST'])
def register():
    email = request.form['email']
    password = request.form['password']
    confirm_password = request.form['confirm_password']

    # Check if passwords match
    if password != confirm_password:
        return "Passwords do not match"

    cursor = connection.cursor()

    # Hash the password before storing it
    hashed_password = hash_password(password)

    # Check if the user already exists in the database (optional)
    check_user_query = "SELECT * FROM users WHERE username = %s"
    cursor.execute(check_user_query, (email,))
    existing_user = cursor.fetchone()

    if existing_user:
        cursor.close()
        return "User already exists"

    # Insert the new user into the database
    insert_query = "INSERT INTO users (username, password) VALUES (%s, %s)"
    user_data = (email, hashed_password)

    cursor.execute(insert_query, user_data)
    connection.commit()

    cursor.close()

    return "Registration successful"

if __name__ == '__main__':
    app.run(debug=True)
