//WAP to print least number that is divisible by given 3 numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    for(int i=1;;i++){
        if(i%num1==0 && i%num2==0 && i%num3==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}

