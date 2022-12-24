//WAP to print nth digit of a number from right
#include<stdio.h>
#include<math.h>
int main()
{
    int num, digit, n1;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter the value of n : ");
    scanf("%d", &n1);
    int copy=num;

    for(int i=0;i<n1;i++){
        digit= copy%10;
        copy=copy/10;
    }
    printf("nth digit of %d is %d \n", num, digit);
    return 0;
}