#include<stdio.h>
int main()
{
    int late;
    printf("Enter number of days : ");
    scanf("%d", &late);
    if(late<=5){
        printf("Total Fine : 50 paise");
    }
    else if(late>5 && late<=10){
        printf("Total Fine : 1 rupee");
    }
    else if(late>10 && late<=30){
        printf("Total Fine : %d", late*5);
    }
    else{
        printf("Your membership has been cancelled");
    }
    return 0;
}
