//WAP to find compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float principal, rate, time, numberTimes, compound_interest;
	printf("Enter principal : ");
	scanf("%f", &principal);
	printf("Enter rate : ");
    scanf("%f", &rate);
	printf("Enter time (in years) : ");
    scanf("%f", &time);
	printf("Enter no. of times interest applied : ");
	scanf("%f", &numberTimes);
	compound_interest =principal*pow((1+rate*0.01/numberTimes), numberTimes*time);
	printf("Final amount after Compound Interest = %.2f \n", compound_interest);
	return 0;
}
