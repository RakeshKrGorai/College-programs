//WAP to find out perfect squares which are even numbers within 1-10000
#include<stdio.h>
int main()
{
    //int i=1, j=1, sum;
    int sum;
    for(int i=1;i<=10000;i++){
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d \n", i);
        }
        sum=0;
    }
    return 0;
}
