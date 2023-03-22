#include<stdio.h>
int sum_rec(int num);
int main(){
	int num, sum=0;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Sum : %d \n",sum_rec(num));
	return 0;
}
int sum_rec(int num){
	if(num!=1){
		return num+sum_rec(num-1);
	}
	else{
		return 1;
	}
}
