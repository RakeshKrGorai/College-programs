#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>

int main( int argc, char *argv[] ) {
   int sockfd, newsockfd, portno, clilen;
   char buffer[256],buffer2[256];
   struct sockaddr_in serv_addr, cli_addr;
   int  n;
   portno = 5001;
   
/* First call to socket() function */
   sockfd = socket(AF_INET, SOCK_STREAM, 0);
   
   if (sockfd < 0) {
      perror("ERROR opening socket");
      exit(1);
   }

// ---Configure settings of the server address structure-----
//Initialize socket structure elements to zero
   bzero((char *) &serv_addr, sizeof(serv_addr));
//Set Address family = Internet
   serv_addr.sin_family = AF_INET;
//Set IP address to localhost
   //serv_addr.sin_addr.s_addr = INADDR_ANY;
   serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//Set port number, using htons function to use proper byte order
   serv_addr.sin_port = htons(portno);
   
/* Now bind the host address using bind() call.*/
   if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
      perror("ERROR on binding");
      exit(1);
   }
      
/* Now start listening for the clients, here process will
go in sleep mode and will wait for the incoming connection
*/
   
   listen(sockfd,5); // Listen on the socket, with 5 max connection requests queued
   printf("Server Listening\n");
   clilen = sizeof(cli_addr);
   
/* Accept actual connection from the client */
   newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr,(socklen_t*) &clilen);
	
   if (newsockfd < 0) {
      perror("ERROR on accept");
      exit(1);
   }
int cnt=1;
   
	while(cnt){
	/* If connection is established then start communicating */
	
   bzero(buffer,256);
   n = read( newsockfd,buffer,255 );
   
   if (n < 0) {
      perror("ERROR reading from socket");
      exit(1);
   }
   
   printf("Here is the message: %s\n",buffer);
   
/* Write a response to the client */
   n = write(newsockfd,"Server got your message",40);
   if (n < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }
	bzero(buffer2,256);
   	n = read( newsockfd,buffer2,255 );
	if (n < 0) {
      perror("ERROR writing to socket");
      exit(1);
   }
      if(buffer2[0]=='0') break;
	
}
   return 0;
}
