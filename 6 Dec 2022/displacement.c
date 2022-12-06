//WAP  to find value of S where S=ut+(1/2)at^2
#include<stdio.h>
#include<math.h>
int main(){
	float u, t, a, S;
	printf("Enter Initial Velocity(u) : ");
        scanf("%f", &u);
	printf("Enter time(t) : ");
        scanf("%f", &t);
	printf("Enter acceleration : ");
        scanf("%f", &a);
	S= u*t + (1.0/2)*a*pow(t,2);
	printf("The value of Displacement(S) is %.2f \n", S);
	return 0;
}
