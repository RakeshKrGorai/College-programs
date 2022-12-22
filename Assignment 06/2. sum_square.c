//WAP to compute sum of square of first n natural numbers
#include<stdio.h>
int main(){
	int num, sum;
	printf("Enter value of n : ");
	scanf("%d", &num);
	sum= num*(num+1)*(2*num+1)/6;
	printf("The sum of squares of first %d natural numbers is %d \n", num, sum);
	return 0;
}
