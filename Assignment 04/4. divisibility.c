//WAP to check a numbver if it is divisible by 7
#include<stdio.h>
int main(){
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	if(number%7 == 0){
		printf("%d is divisible by 7 \n",number);
	}
	else{
		printf("%d is not divisble by 7 \n", number);
	}
	return 0;
}
