#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
int main()
{
        char sendMessage[512],receiveMessage[512];
        int sock, result;
        struct hostent *host;
        struct sockaddr_in serverAdd;
        host = gethostbyname(“xxx.xx.xx.xx”);
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
  {
            perror(“Socket creation failed”);
            exit(1);
        }
        serverAdd.sin_family = AF_INET;
        serverAdd.sin_port = htons(5000);
        serverAdd.sin_addr = *((struct in_addr *)host->h_addr);
        bzero(&(serverAdd.sin_zero),8);
        if (connect(sock, (struct sockaddr *)&serverAdd, sizeof(struct sockaddr)) == -1)
        {
            perror(“Connection failed”);
            exit(1);
        }
        while(1)
        {
        result = recv(sock,receiveMessage,1024,0);
          receiveMessage[result] = ”;
  printf(“nRecieved Message: %s ” , receiveMessage);
          printf(“nSEND The message: “);
          fgets(sendMessage,512,stdin);
            send(sock,sendMessage,strlen(sendMessage), 0);
        }
        return 0;
}
