//WAP to print n fibonacci numbers
#include<stdio.h>
int main(){
	int num, a=0, b=1, c=0, counter=0;
	printf("Enter value of n : ");
	scanf("%d", &num);
	//printf("%d", a);
	while (counter<num)
	{
		printf(" %d", a);
		c=a;
		a+=b;
		b=c;
		counter++;
	}
	return 0;
}