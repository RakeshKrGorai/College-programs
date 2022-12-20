//WAP to check Prime numbers
#include<stdio.h>
int main(){
	int num, counter = 0;
	printf("Enter a number to check : ");
	scanf("%d", &num);
	for(int i=2;i<num;i++){
		if (num%i==0){
			counter+=1;
		}
	}
	if(counter==0){
		printf("%d is a prime number \n", num);
	}
	else{
		printf("%d is not a prime number \n", num);
	}
	return 0;
}
