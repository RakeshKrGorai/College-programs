//WAP to check armstrong number
#include<stdio.h>
#include<math.h>
int main(){
	int num, copy, digit, sum=0;
	printf("Enter any number : ");
	scanf("%d", &num);
	copy=num;
	while(num){
		digit = num%10;
		num=num/10;
		sum+=pow(digit,3);
	}
	if(sum==copy){
		printf("%d is an armstrong number \n",copy);
	}
	else{
		printf("%d is not an armstrong number \n",copy);
	}
	return 0;
}


