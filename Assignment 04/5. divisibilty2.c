//WAP to check divisiblity by both 11&13
#include<stdio.h>
int main(){
	int number;
	printf("Enter : ");
	scanf("%d",&number );
	if(number%11 ==0 && number%13==0){
		printf("%d is divisible by both 11 and 13", number);
	}
	else{
		printf("%d is not divisible by both 11 and 13", number);
	}
	return 0;
}
