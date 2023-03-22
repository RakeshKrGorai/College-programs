//WAP to compute real roots of quadratic equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root1, root2;
    printf("Enter values of a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a && b){
        int discriminant = (b*b)- 4*a*c;
        if(discriminant<0){
            printf("No real roots \n");
        }
        else{
            root1 = (-b + sqrt(discriminant))/2*a;
            root2 = (-b - sqrt(discriminant))/2*a;
            printf("Roots of the equation is %.2f and %.2f \n", root1, root2);
        }
    }
    if(a==0){
        root1= -c/b;
	printf("Root of the equation is %.2f \n", root1);
    }
    return 0;
}
