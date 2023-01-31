//WAP to find sum of digits using recursion
#include<stdio.h>
int sum_digits(int num);
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Sum of digits : %d \n", sum_digits(num));
	return 0;
}
int sum_digits(int num){
	if(num!=0){
		return ((num%10)+sum_digits(num/10));
	}
	else{
		return 0;
	}
}
