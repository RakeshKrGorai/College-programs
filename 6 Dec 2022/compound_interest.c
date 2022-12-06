//WAP to find compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float principal, rate, time, number_Times, compound_interest;
	printf("Enter principal : ");
	scanf("%f", &principal);
	printf("Enter rate : ");
        scanf("%f", &rate);
	printf("Enter time : ");
        scanf("%f", &time);
	printf("Enter times of compounding : ");
        scanf("%f", &number_Times);
	compound_interest =principal*pow((1+rate*0.01/number_Times), number_Times*time);
	printf("Final amount after Compound Interest = %.2f \n", compound_interest);
	return 0;
}
