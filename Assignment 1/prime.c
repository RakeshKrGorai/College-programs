//WAP to print prime numbers within range 3-100
#include<stdio.h>
int main(){
	int i, j;
	for(i=3;i<=100;i++){
		int cnt=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				cnt++;
				break;
			}
		}
		if(cnt==0){
			printf("%d ", i);
		}
	}
	printf("\n");
}
