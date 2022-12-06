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
	compound_interest =principal*pow((1+rate/number_Times*100), number_Times*time);
	printf("CI = %.2f \n", compound_interest);
	return 0;
}
