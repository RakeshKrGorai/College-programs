//WAP to enter the principal amount, time, rate of interest and calculate simple_interest
#include<stdio.h>
int main(){
        float principal, rate, time, simple_interest;
        printf("Enter principal amount : ");
        scanf("%f", &principal);
        printf("Enter rate : ");
        scanf("%f", &rate);
        printf("Enter time : ");
	scanf("%f", &time);
	simple_interest = (principal*rate*time)/100;
	printf("The calculated simple interest for the given stats is %.2f \n", simple_interest);
	return 0;
}
