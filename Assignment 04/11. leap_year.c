//WAP to check whether leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year to check : ");
    scanf("%d", &year);
    if((year%400==0)||(year%4==0)){
        printf("%d is a leap year \n", year);
    }
    else if(year%100==0){
        printf("%d is not a leap year \n", year);
    }
    else{
        printf("%d is not a leap year \n", year);
    }
    return 0;
}
