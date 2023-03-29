#include<sys/socket.h>
#include<netdb.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 80
#define PORT 43454
#define SA struct sockaddr



int main()
{
	char buff[MAX];
	int sockfd,len,n;
	struct sockaddr_in servaddr;
	sockfd=socket(AF_INET,SOCK_DGRAM,0);
	 if(sockfd==-1)
	 {
	printf("socket creation failed...\n");
	exit(0);
          }
	else
		printf("Socket successfully created..\n");
		bzero(&servaddr,sizeof(len));
		servaddr.sin_family=AF_INET;
		servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
		servaddr.sin_port=htons(PORT);
		len=sizeof(servaddr);
		for(;;)
		{
		   printf("\nEnter your Message to server : ");
		   n=0;

			while((buff[n++]=getchar())!='\n');
				sendto(sockfd,buff,sizeof(buff),0,(SA *)&servaddr,len);
				bzero(buff,sizeof(buff));
				recvfrom(sockfd,buff,sizeof(buff),0,(SA *)&servaddr,&len);
				printf("Message from Server : %s\n",buff);
					if(strncmp("exit",buff,4)==0)
						{
							printf("Client Exit...\n");
							break;
						}
			}
	close(sockfd);
	}
