//WAP to check 3 digit pallindrome no without using loop
#include<stdio.h>
int main(){
	int number;
	printf("Enter any three digit number to check : ");
	scanf("%d", &number);
	int firstDigit = number/100;
	int lastDigit = number%10;
	if(firstDigit == lastDigit){
		printf("%d is a palllindrome number \n", number);
	}
	else{
		printf("%d is not a pallindrome number \n", number);
	}
	return 0;

}

