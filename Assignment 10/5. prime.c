#include<stdio.h>
int prime(int num);
int main(){
	int num;
	printf("Enter number to check : ");
	scanf("%d", &num);
	prime(num);
	return 0;
}
int prime(int num){
	int counter=0;
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
}
