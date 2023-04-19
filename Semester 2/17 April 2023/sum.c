#include<stdio.h>
#define size 10
int top=-1;

void push(int stack[],int digit){
	if(top==size-1){
		printf("Stack Overflow");
	}
	else{
		stack[++top]=digit;
	}
}

int sum(int stack[]){
	int add=0;
	if(top==-1){
		printf("No digits");
		return 0;
	}
	else{

		int temp=top;
		while(temp>=0){
			add+=stack[temp--];
		}
		return add;
	}
}

int main(){
	int stack[size],n,digit;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n){
		digit=n%10;
		push(stack,digit);
		n/=10;
	}
	printf("Sum : %d\n",sum(stack));
}
