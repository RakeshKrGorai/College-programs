//WAP to evaluate expression x=(a-b)/(c-d), and give error when c==d
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value of a, b, c, d : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(c!=d){
        float x = (a-b)/(c-d);
        printf("The value of x as per the equation is %.2f", x);
    }
    else{
        printf("Value of c and d cannot be equal, retry");
    }
    return 0;
}
