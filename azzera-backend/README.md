# Phase 1: Networking Basics

## Objective:
Understand how to handle HTTP requests and responses using C. This will involve learning about how servers listen for incoming connections and how data is sent and received over the network.

## Conceptual Steps:

### 1. Understanding TCP/IP and Sockets
- **TCP/IP Protocol**: Learn about the TCP/IP model, which is the foundation of internet communications. Focus on the transport layer (TCP) and the application layer (HTTP).
- **Sockets**: Understand what sockets are and how they are used for network communication. Sockets are endpoints for sending and receiving data over a network.

### 2. Creating a Simple Server
- **Binding to a Port**: The server needs to bind to a specific port on the host machine to listen for incoming connections. Learn how to choose a port and bind a socket to it.
- **Listening for Connections**: Once the server is bound to a port, it must listen for incoming connections. This involves setting up a loop to handle multiple clients.

### 3. Handling Client Requests
- **Accepting Connections**: When a client connects to the server, the server must accept this connection and establish a two-way communication channel.
- **Reading Data**: After accepting a connection, the server needs to read incoming data from the client, typically an HTTP request.
- **Responding to the Client**: After processing the request, the server sends a response back to the client. This could be as simple as sending a basic HTML page.

### 4. Closing Connections
- **Graceful Shutdown**: Learn how to properly close connections once the communication is complete, ensuring all resources are freed.

## Plan of Action:
1. **Study TCP/IP and Sockets**: Read resources or watch videos on how TCP/IP and sockets work. Make sure you understand the flow of data from client to server and vice versa.
2. **Understand Server Lifecycle**: Learn about the lifecycle of a server process: initialization, handling requests, and shutdown.
3. **Break Down Components**: Identify and understand each function needed for your server, like socket creation, binding, listening, accepting, reading, writing, and closing.

-----

im gonna use my side project of creating a socket, into this project, then im gonna expand upon it.
SO first we have a server that is ready to accept any client.
Steps:
1-  Modify the server to read data sent by the client.
2-  After reading the client’s data, send a response back 
3-  Modify the server to handle multiple clients simultaneously.
4-  Parse client requests and send appropriate responses (e.g., HTTP responses).
