//WAP to swap the values using 3rd variable
#include<stdio.h>
int main()
{
    int num1, num2, variable;
    printf("Enter any two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping : %d %d \n",num1, num2);
    variable=num1;
    num1=num2;
    num2=variable;
    printf("After swapping : %d %d \n", num1, num2);
    return 0;
}