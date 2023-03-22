//WAP to find largest among 2 numbers
#include<stdio.h>
int main(){
	int num1, num2;
	printf("Enter 2 numbers : ");
	scanf("%d %d", &num1, &num2);
	if(num1>num2){
		printf("%d is greater than %d \n", num1, num2);
	}
	else if(num2>num1){
		printf("%d is greater than %d \n", num2, num1);
	}
	return 0;
}
