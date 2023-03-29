#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
int main()
{
         char sendMessage[1024] ,receiveMessage[1024];
         int sock, connected, result;
         struct sockaddr_in serverAdd, clientAdd;
         int length;
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
        {
            perror(“Socket creation is failed”);
            exit(1);
        }
        if (setsockopt(sock,SOL_SOCKET,SO_REUSEADDR,&1,sizeof(int)) == -1)
        {
            perror(“Set socket option”);
            exit(1);
        }
        serverAdd.sin_family = AF_INET;
        serverAdd.sin_port = htons(5000);
        serverAdd.sin_addr.s_addr = INADDR_ANY;
        bzero(&(serverAdd.sin_zero),8);
        if (bind(sock, (struct sockaddr *)&serverAdd, sizeof(struct sockaddr))== -1)
       {
            perror(“Unable to bind”);
            exit(1);
        }
        if (listen(sock, 3) == -1)
        {
            perror(“Listen”);
            exit(1);
        }
        printf(“TCPServer Waiting for client connectionn”);
        fflush(stdout);
        while(1)
        {
            length = sizeof(struct sockaddr_in);
            connected = accept(sock,(struct sockaddr *)&clientAdd,&length);
            printf(“Server is connected with IP address %s and port %d    n”,inet_ntoa(clientAdd.sin_addr),ntohs(clientAdd.sin_port));
while (1)
            {
              printf(” SEND the message : “);
              fgets(sendMessage,100,stdin);
      send(connected, sendMessage,strlen(sendMessage), 0);
result = recv(connected,receiveMessage,512,0);
receiveMessage[result] = ”;
printf(“Received message : %s n” , receiveMessage);
              fflush(stdout);
            }
        }
        return 0;
}
