const io = require('socket.io')(8000, {
  cors: {
    origin: "http://127.0.0.1:5500",
    methods: ["GET", "POST"]
  }
});

const users = {};

io.on('connection', socket => {
  socket.on('new-user-joined', userName => {
    console.log("New-User", userName);
    users[socket.id] = userName;
    socket.broadcast.emit('user-joined', userName);
  });

  socket.on('send', message => {
    socket.broadcast.emit('receive', { message: message, userName: users[socket.id] });
  });

  socket.on('disconnect', () => {
    const userName = users[socket.id];
    if (userName) {
      socket.broadcast.emit('left', userName);
      delete users[socket.id];
    }
  });
});
