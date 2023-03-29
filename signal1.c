#include<stdio.h>
#include<signal.h>
void abc( )
main ( )
{
signal (SIGINT , abc);
while (1)
printf(‚\n HELLO‛);
}
void abc (int signo)
{
printf( "signal caught … … SIGINT \n") ;
 exit (0) ;
}
