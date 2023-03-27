//WAP to print armstrong number between 100-10000
#include<stdio.h>
int main(){
	int i, j;
	for(i=100;i<=10000;i++){
		int cpy=i, sum=0, digit=0;
		while(cpy){
			digit=cpy%10;
			sum+=digit*digit*digit;
			cpy/=10;
		}
		if(sum==i){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
