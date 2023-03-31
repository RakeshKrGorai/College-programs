//WAP to input two numbers and calculate their gcd
#include<stdio.h>
int main(){
	int n1, n2, gcd=1, i;
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	for(i=1;i<=n1;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	printf("GCD  : %d\n", gcd);
}

