//WAP to enter 2 numbers and find the sum and average of those numbers
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    int avg= (float)(num1+num2)/2;
    printf("The sum of the given numbers is %d \n", num1+num2);
    printf("The average of the given numbers is %d \n",avg);
    return 0;
}
