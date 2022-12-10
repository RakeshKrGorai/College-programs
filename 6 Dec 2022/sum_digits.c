//WAP to take input of 4 digit number and add first and last digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a 4 digit number : ");
    scanf("%d", &num);
    int firstDigit = num/1000;
    int lastDigit = num%10;
    printf("First DIgit : %d \n", firstDigit );
    int sum = firstDigit+lastDigit;
    printf("The sum is %d", sum);
    return 0;
}
