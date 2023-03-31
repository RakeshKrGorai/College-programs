//WAP to print reverse of a number
#include<stdio.h>
int main(){
	int n, rev=0, digit=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n){
		digit = n%10;
		rev=rev*10+digit;
		n/=10;
	}
	printf("Reverse : %d \n", rev);
}
