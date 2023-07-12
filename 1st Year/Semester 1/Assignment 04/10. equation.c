//WAP to enter x1 and x2 ax1+bx2=m, and cx1+dx2=n, where x1 = (nd-bn)/(ad-cb) and x2= (na-mc)/(ad-cb )
#include<stdio.h>
int main()
{
    float x1, x2;
    int a, b, c, d, m, n;
    printf("Enter a, b, c, d, m, n : ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);
    if((a*d-c*b)!=0){
        x1= (float)((n*d - b*n)/(a*d-c*b));
        x2 = (float)((n*a - m*c)/(a*d-c*b));
    }
    else{
        printf("Error!");
    }
    printf("Values of x1 and x2 are %.2f and %.2f respectively",x1, x2 );
    return 0;
}