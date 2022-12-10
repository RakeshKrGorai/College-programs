//WAP to take input of 4 digit number and add first and last digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a 4 digit number : ");
    scanf("%d", &num);
    int firstDigit = num/1000;
    int lastDigit = num%10;
    int sum = firstDigit+lastDigit;
    printf("The sum is %d \n", sum);
    return 0;
}
