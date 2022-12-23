//WAP to find out perfect squares which are even numbers within 1-10000
#include<stdio.h>
#include<math.h>
int main(){
	float root;
	for(int i=1;i<=10000;i++){
		if(i%2==0){
			root=sqrt(i);
			for(int j=1;j<i;j++){
				if(j==root){
					printf("%d \n", i);
				}
			}
		}
	}
	return 0;
}
