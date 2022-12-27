//WAP to print following pattern
#include<stdio.h>
int main(){
	printf("* \n");
	for(int i=1;i<9;i+=2){
		for (int j=0;j<i+2;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
