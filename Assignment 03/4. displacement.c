//WAP  to find value of S where S=ut+(1/2)at^2
#include<stdio.h>
#include<math.h>
int main(){
	float u, t, a, S;
	printf("Enter value of u : ");
    scanf("%f", &u);
	printf("Enter value of t : ");
    scanf("%f", &t);
	printf("Enter value of a : ");
    scanf("%f", &a);
	S= u*t + (1.0/2)*a*pow(t,2);
	printf("The value of S as per the equation is %.2f \n", S);
	return 0;
}
