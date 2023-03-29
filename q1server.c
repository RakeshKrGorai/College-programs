//server

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
void doprocessing (int sock){
int n;
char buffer[256];
bzero(buffer,256);
n=read(sock,buffer,255);
if(n<0){
perror("Error reading from socket");
exit(1);
}
printf("Here is the message: %s\n",buffer);
n=write(sock,"I got your message",18);
if(n<0){
perror("Error writing to socket");
exit(1);
}
}
int main( int argc, char *argv[] ) {
int sockfd, newsockfd, portno, clilen,pid;
char buffer[256];
struct sockaddr_in serv_addr, cli_addr;
int n;
portno = 6969;
sockfd = socket(AF_INET, SOCK_STREAM, 0);
if (sockfd < 0) {
perror("ERROR opening socket");
exit(1);
}
bzero((char *) &serv_addr, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
serv_addr.sin_addr.s_addr = inet_addr("192.168.20.160");
serv_addr.sin_port = htons(portno);
if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
perror("ERROR on binding");
exit(1);
}listen(sockfd,5); // Listen on the socket, with 5 max connection requests
printf("Server Listening\n");
clilen = sizeof(cli_addr);
while(1){
newsockfd= accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
if(newsockfd < 0){
perror("Error on accept");
exit(1);
}
pid=fork();
if(pid<0){
perror("Error on fork");
exit(1);
}
if(pid==0){
close(sockfd);
doprocessing(newsockfd);
exit(0);
}
else{
close(newsockfd);
}
}
bzero(buffer,256);
n = read( newsockfd,buffer,255 );
if (n < 0) {
perror("ERROR reading from socket");
exit(1);
}
printf("Here is the message: %s\n",buffer);
n = write(newsockfd,"Server got your message",40);
if (n < 0) {
perror("ERROR writing to socket");
exit(1);
}
close(sockfd);
return 0;
}
