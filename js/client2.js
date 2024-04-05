const socket = io('http://localhost:8000');

const form = document.getElementById('send-container');
const messageInput = document.getElementById('messageInp');
const messageContainer = document.querySelector('.containerbox');

const name = prompt('Enter Your Name To Join');
socket.emit('new-user-joined', name);

form.addEventListener('submit', (e) => {
  e.preventDefault();
  const message = messageInput.value;
  append(`You: ${message}`, 'left'); // Display the sent message on the left
  socket.emit('send', message);
  messageInput.value = '';
});

socket.on('user-joined', (name) => {
  append(`${name} joined the chat`, 'right');
});

socket.on('user-left', (name) => {
  append(`${name} left the chat`, 'right');
});

socket.on('receive', (data) => {
  // Trim the message content to remove extra spaces
  append(`${data.name}: ${data.message}`, 'right');
});

function appendMessage(message, position) {
  const messageElement = document.createElement('div');
  messageElement.innerText = message;
  messageElement.classList.add('message');
  messageElement.classList.add(position);
  messageContainer.append(messageElement);
}

const append = (message, position) => {
  appendMessage(message, position);
};

form.addEventListener('submit', (e) => {
  e.preventDefault();
  const message = messageInput.value;
  append(`You: ${message}`, 'left');
  socket.emit('send', message);
  messageInput.value = '';
});
