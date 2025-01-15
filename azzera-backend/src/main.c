#include "cach49.h"

int main() 
{
		int rv, fd, fdl, fda;

	fd = socket(PF_INET, SOCK_STREAM, 0);
	if (fd < 0) 
	{
		perror("Socket creation Failed!");
		exit(EXIT_FAILURE);
	}

	printf("Socket created successfully\n");

	struct sockaddr_in addr = {};
	addr.sin_family = AF_INET;
	addr.sin_port = htons(atoi(PORT));
	addr.sin_addr.s_addr = inet_addr(ADDR);

	if ((rv = bind(fd, (struct sockaddr *)&addr, sizeof(addr)))) 
	{
		perror("Binding the Socket Failed!");
		close(fd);
		exit(EXIT_FAILURE);
	}

	printf("Bind created successfully\n");

	if ((fdl = listen(fd, 5))) 
	{
		perror("Listening Faild!");
		close(fd);
		exit(EXIT_FAILURE);
	}

	printf("Server is listening on %s:%s\n", ADDR, PORT);

	while (true) 
	{
		printf("Waiting for a client to connect...\n");
		struct sockaddr_in client_addr = {};
		socklen_t client_len = sizeof(client_addr);
		fda = accept(fd, (struct sockaddr *)&client_addr, &client_len);
		if (fda < 0) 
		{
			perror("Accept failed!");
			continue;
		}
		char buff[1024] = {0};
		ssize_t byte_recieved = recv(fda, buff, sizeof(buff), 0);
		if(byte_recieved < 0)
		{
			perror("Recieving Failed!");
		}
		else if(byte_recieved == 0)
		{
			printf("Client Disconnected\n");
		}
		else
		{
			buff[byte_recieved] = '\0';
			printf("The client said %s\n", buff);
			const char *response = "Hello From the other side";
			ssize_t byte_sent = send(fda, response, strlen(response), 0);
			if(byte_sent < 0)
			{
				perror("Sending message failed");
			}
			else
			{
				printf("The response send to the client\n");
				
			}
		}
		printf("The client connected!\n");
		close(fda);
	}

	close(fd);
	return(0);
}

