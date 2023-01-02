//WAP to find sum of digits of given integer
#include<stdio.h>
int main(){
	int num, digit, sum=0;
	printf("Enter any number : ");
	scanf("%d", &num);
	while(num){
		digit = num%10;
		num=num/10;
		sum+=digit;
	}
	printf("Sum of digits is %d \n", sum);
	return 0;
}