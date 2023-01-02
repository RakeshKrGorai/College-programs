//WAP to find out perfect squares which are even numbers within 1-10000
#include<stdio.h>
int main(){
	float root;
	for(int i=2;i<=10000;i+=2){
	    int sq=i*i;
		if((sq)<=10000){
		    printf("%d \n", sq);
		}
	}
	return 0;
}
