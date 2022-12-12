//WAP to find the value of t where t=ax^3+bx^2+cx+d, where a, b, c, d are constants
#include<stdio.h>
#include<math.h>
int main()
{
    int a=1, b=2, c=3, d=4, x;
    printf("Enter value of x : ");
    scanf("%d", &x);
    int t= a*pow(x,3)+b*pow(x,2)+c*x+d;
    printf("The output for the given expression is %d \n", t);
    return 0;
}
