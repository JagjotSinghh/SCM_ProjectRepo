// js/client.js
const socket = io('http://localhost:8000'); // Replace with your server URL

// Function to send a message
function sendMessage(message) {
    socket.emit('chatMessage', message);
}

// Handle incoming messages
socket.on('chatMessage', (message) => {
    displayMessage(message, 'left'); // Display received messages on the left
});

// Function to display messages
function displayMessage(message, sender) {
    const messageContainer = document.querySelector('.containerbox');
    const messageDiv = document.createElement('div');
    messageDiv.classList.add('message', sender);
    messageDiv.textContent = message;
    messageContainer.appendChild(messageDiv);
}

// Handle form submission
const sendForm = document.getElementById('send-container');
sendForm.addEventListener('submit', (e) => {
    e.preventDefault();
    const messageInput = document.getElementById('messageInp');
    const message = messageInput.value;
    if (message) {
        sendMessage(message);
        displayMessage(message, 'right'); // Display sent messages on the right
        messageInput.value = '';
    }
});

const name = prompt("Enter Your Name to Join")
socket.emit('new-user-joined', name)
