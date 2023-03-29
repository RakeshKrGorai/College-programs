//Concurrent server
//Client


#include<stdio.h>
#include<stdlib.h>
#include<netdb.h>
#include<netinet/in.h>
#include<unistd.h>
#include<string.h>
#include <arpa/inet.h>
int main() {
int choice=1;
int sockfd, portno, n;
struct sockaddr_in serv_addr;
struct hostent *server;
char buffer[256];
char exMsg[ ]="Bye!";
//portno = 5001;
portno=6969;
sockfd = socket(AF_INET, SOCK_STREAM, 0);
if (sockfd < 0) {
perror("ERROR opening socket");
exit(1);
}
bzero((char *) &serv_addr, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
serv_addr.sin_port = htons(portno);
serv_addr.sin_addr.s_addr = inet_addr("192.168.20.160");
if (connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
perror("ERROR connecting");
exit(1);
}
while(choice==1){
printf("Please enter the message: ");
getchar();
bzero(buffer,256);
fgets(buffer,256,stdin);
n = write(sockfd, buffer, strlen(buffer));
if (n < 0) {
perror("ERROR writing to socket");
exit(1);
}
n = read(sockfd, buffer, 256);
if (n < 0) {
perror("ERROR reading from socket");
exit(1);
}
printf("\n1.Send More Messages?");
printf("\n2.Exit\n");
scanf("%d",&choice);
if(choice == 2){
int ex = write(sockfd,exMsg,strlen(exMsg));
return 0;
}
else
continue;
}
}


