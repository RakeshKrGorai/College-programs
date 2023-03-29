#include<stdio.h>
#include<signal.h>
void fp_err ( int );
main( )
{
 int X=5, Y=0, Z ;
 signal ( SIGFPE , fp_err ) ;
 Z = X / Y ;
}
void fp_err ( int signo )
{
 printf( "signal cought … … SIGFPE \n") ;
 exit (0) ;
}
