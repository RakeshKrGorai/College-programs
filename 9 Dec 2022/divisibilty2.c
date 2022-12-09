//WAP to check divisiblity by both 11&13
#include<stdio.h>
int main(){
	int number;
	printf("Enter : ");
	scanf("%d",&number );
	if(number%11 ==0 && number%13==0){
		printf("Divisible by both 11 and 13");
	else{
		printf("Not divisible");
	}
	return 0;
}
