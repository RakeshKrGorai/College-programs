//WAP to check whether a given year is leap year or not using nested if...else
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year to check : ");
    scanf("%d", &year);
    if(year%400==0){
        printf("%d is a leap year", year);
    }
    else if(year%100==0){
        printf("%d is not a leap year", year);
    }
    else if(year%4==0){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}
