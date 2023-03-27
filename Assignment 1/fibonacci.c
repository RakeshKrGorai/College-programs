//WAP to print fibonacci series upto n
#include<stdio.h>
int main(){
	int i=0, n, a=0, b=1, result=0;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i;i<=n;i++){
		printf("%d ",a);
		result=a+b;
		a=b;
		b=result;
	}
	printf("\n");
}
