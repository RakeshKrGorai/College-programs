//Check whether a 3 digit no is pallindrome or not
#include<stdio.h>
int main()
{
    int number, copy, reverseNumber, digit;
    printf("Enter any 3 digit number : ");
    scanf("%d", &number);
    copy= number;
    while (number!=0){
        digit = number%10;
        number=number/10;
        reverseNumber = reverseNumber*10 + digit;
    }
    if(copy==reverseNumber ){
        printf("%d is a pallindrome number.", copy);
    }
    else{
        printf("%d is not a pallindrome number.", copy);
    }
    return 0;
}
