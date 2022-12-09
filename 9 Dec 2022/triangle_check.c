#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("ENter 3 sides of  triangle : ");
	scanf("%d %d %d ", &s1, &s2, &s3);
	if((s1+s2)>s3){
		printf("Valid");
	}
	else if((s2+s3)>s1){
		printf("Valid");
	}
	else if((s3+s1)>s2){
		printf("Valid");
	}
	else{
		printf("Invalid");
	}
