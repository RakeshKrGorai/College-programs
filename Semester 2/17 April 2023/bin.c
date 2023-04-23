#include<stdio.h>

#define size 30
int top=-1;
int push(int stack[],int digit){
	if(top==size-1){
		printf("Stack Overflow");
	}
	else{
		stack[++top]=digit;
	}
}

int pop(int stack[]){
	if(top == -1){
		printf("Stack Underflow");
	}
	else{
		while(top>=0){
			printf("%d ",stack[top--]);
		}
	}
}
int main(){
	int n,digit,stack[size];
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n){
		digit=n%2;
		push(stack,digit);
		n/=2;
	}
	printf("Binary Equivalent : ");
	
	pop(stack);
}
