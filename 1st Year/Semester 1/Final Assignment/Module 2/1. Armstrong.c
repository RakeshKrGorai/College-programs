#include<stdio.h>
int main()
{
    int m, n, i, copy, digit;
    printf("Enter starting and ending range : ");
    scanf("%d %d", &m, &n);
    for(i=m;i<=n;i++){
        copy=i;
        int sum=0;
        while(copy){
            digit=copy%10;
            sum+=digit*digit*digit;
            copy=copy/10;
        }
        if(sum==i){
            printf("%d is an armstrong number\n",sum);
        }
    }
    return 0;
}
