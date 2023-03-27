#include<stdio.h>
int main(){
	int i,j;
	for(i=10;i<=1000;i++){
		int digit = i%10, cnt=0, cp=i, rem;
		while(cp){
			rem=cp%10;
			if(rem!=digit){
				cnt++;
				break;
			}
			else{
				cnt=0;
				cp/=10;
			}
		}
		if(cnt==0){
			printf("%d ", i);
		}
	}
	printf("\n");
}
