#include<stdio.h>
#include<stdlib.h>
int main(int argc , char * argv[])
{
   int NumberOfArguments = argc;
int i ;
int sum =0;
  for( i=1 ; i< NumberOfArguments; i++)
      {
sum = sum +  atoi(argv[i]) ;
}
printf("the sum is %d " , sum);
printf("the avg is %d " , sum/(NumberOfArguments-1));


 return 0 ;
}
