from flask import Flask, render_template, request, session
import mysql.connector
import bcrypt

app = Flask(__name__ , template_folder='../../social-media-dashboard-with-theme-switcher-master', static_folder='../css')
app.secret_key = b'_5#y2L"F4Q8z\n\xec]/'  # Update with your own secret key

connection = mysql.connector.connect(
    host='localhost',
    user='root',
    password='password',
    database='users_data'
)

def check_password(entered_password, hashed_password):
    return bcrypt.checkpw(entered_password.encode('utf-8'), hashed_password.encode('utf-8'))

@app.route('/')
def index():
    return render_template('login.html')

@app.route('/login', methods=['POST'])
def login():
    username = request.form['username']
    password = request.form['password']

    cursor = connection.cursor()
    query = "SELECT * FROM users WHERE username = %s"
    cursor.execute(query, (username,))
    user = cursor.fetchone()
    cursor.close()

    if user and check_password(password, user[2]):
        session['username'] = username
        return "Login successful"
    else:
        return "Login failed"

if __name__ == '__main__':
    app.run(debug=True)
