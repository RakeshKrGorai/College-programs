//WAP to calculate power of a number using recursion
#include<stdio.h>
int power(int num, int pow1);
int main()
{
    int num, pow1;
    printf("Enter number and power : ");
    scanf("%d %d", &num, &pow1);
    printf("Result : %d \n", power(num, pow1));
    return 0;
}
int power(int num, int pow1){
    if(pow1!=0){
        return  (num*power(num, pow1-1));
    }
    else{
        return 1;
    }
}
