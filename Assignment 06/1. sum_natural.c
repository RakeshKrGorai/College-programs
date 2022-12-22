//WAP to compute 1+2+3+....n
#include<stdio.h>
int main(){
	int num, sum=0;
	printf("Enter the value of n : ");
	scanf("%d", &num);
	/*Using formula(not what teacher wants)
	sum = num*(num+1)/2;*/
	// Program teacher is expecting(loop)
	for(int i=1;i<=num;i++){
		sum+=i;
	}
	printf("The sum of %d natural numbers is %d \n", num, sum);
	return 0;
}
