//WAP to print factorial of a number

#include<stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}
int factorial(int num){
    if(num!=1){
        int i=1, fact=1;
        for(i;i<=num;i++){
            fact*=i;
        }
        return fact;
    }
    else{
        return 1;
    }
}
