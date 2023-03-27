//WAP to count frequency of each digit present in a number without using array
#include<stdio.h>
int main(){
	int n, i,j, rem;
	printf("Enter value of n : ");
	scanf("%d", &n);
	while(n){
		int cp=n;
		int digit = n%10;
		int freq=0;
		while(cp){
			rem=cp%10;
			if(digit==rem){	
				freq++;
			}
			cp/=10;
		}
		n/=10;
		printf("%d occurs %d times\n", digit, freq);
	}
}
