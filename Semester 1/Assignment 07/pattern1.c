//WAP to print following pattern
#include<stdio.h>
int main(){
	int i, j;
	printf("* \n");
	for(i=1;i<9;i+=2){
		for (j=0;j<i+2;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
