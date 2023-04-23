#include<stdio.h>
#define size 100
int top=-1;

void push(char stack[],char element){
	if(top == size - 1){
		printf("Stack Overflow");
		return;
	}
	else{
		stack[++top]=element;
	}
}

char pop(char stack[]){
	if(top == -1){
		printf("Stack Underflow");
	}
	else{
		while(top>=0){
			printf("%c ",stack[top--]);
		}
	}
}

int main(){
	char stack[size],element[size],i;
	printf("Enter string : ");
	scanf("%s",element);
	for(i=0;element[i]!='\0';i++){
		push(stack,element[i]);
	}
	pop(stack);
	printf("\n");
}
