# AZZERA

AZZERA is a mobile chatroom app designed for lifelong friends to communicate and keep in touch in real-time. It includes features like pinging each other to plan meetings, creating chatrooms, and sending messages. The backend is built in **C** for performance purposes, while the frontend is developed using **Flutter** for cross-platform compatibility.

---

## Features

- **User Authentication**:
  - Sign up, log in, and log out.
  - Secure storage of user credentials using hashed passwords.
- **Chatrooms**:
  - Create, join, and leave chatrooms.
  - Send and receive messages in real-time.
- **Pinging/Notifications**:
  - Ping users to notify them (e.g., for meetings).
  - Push notifications for new messages or pings.
- **User Profiles**:
  - Display user information (e.g., name, profile picture).
  - Update profile details.
- **Redis Integration**:
  - Use Redis for real-time messaging and data storage.
- **HTTPS Support**:
  - Secure communication between the app and backend using HTTPS.

---

## Tech Stack

### Backend (C)
- **Libraries**:
  - `libcurl`: For HTTP communication.
  - `hiredis`: For Redis integration.
  - `libwebsockets`: For WebSocket communication.
  - `sqlite3`: For persistent data storage.
  - `jansson`: For JSON parsing.
- **Features**:
  - User authentication (JWT).
  - Real-time chat using WebSocket.
  - Redis for real-time data storage.
  - SQLite for persistent data.

### Frontend (Flutter)
- **Libraries**:
  - `http`: For HTTP requests.
  - `web_socket_channel`: For WebSocket communication.
  - `firebase_messaging`: For push notifications.
- **Features**:
  - User authentication UI.
  - Chatroom interface.
  - Real-time messaging.
  - Push notifications.

---


