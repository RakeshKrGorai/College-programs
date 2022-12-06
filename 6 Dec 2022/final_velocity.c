//WAP to find the value of V where v^2=u^2+2aS
#include<stdio.h>
#include<math.h>
int main()
{
    float u, v, a, S;
    printf("Enter value of Initial Velocity : ");
    scanf("%f", &u);
    printf("Enter value of Acceleration : ");
    scanf("%f", &a);
    printf("Enter value of Displacement : ");
    scanf("%f", &S);
    v= pow((pow(u,2)+2.0*a*S), 1.0/2);
    printf("Final Velocity : %.2f", v);
    return 0;
}
