//WAP to compute sum of 1+7+7^2+.......nth term
#include<stdio.h>
#include<math.h>
int main(){
	int num, sum=0;
	printf("Enter value of n :");
	scanf("%d", &num);
	for(int i=0;i<=num;i++){
		sum+=pow(7,i);
	}
	printf("Sum of the given series is %d \n", sum);
	return 0;
}
