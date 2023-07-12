//WAP to compute sum of square of first n natural numbers
#include<stdio.h>
int main(){
	int num, sum;
	printf("Enter value of n : ");
	scanf("%d", &num);
	/*Using formula(not what teacher wants)
	sum= num*(num+1)*(2*num+1)/6;*/
	// Program teacher is expecting(loop)
	for(int i=1;i<=num;i++){
		sum+=i*i;
	}
	printf("The sum of squares of first %d natural numbers is %d \n", num, sum);
	return 0;
}