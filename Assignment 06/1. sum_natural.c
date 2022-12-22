//WAP to compute 1+2+3+....n
#include<stdio.h>
int main(){
	int num, sum=0;
	printf("Enter the value of n : ");
	scanf("%d", &num);
	sum = num*(num+1)/2;
	printf("The sum of %d natural numbers is %d \n", num, sum);
	return 0;
}
