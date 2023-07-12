//WAP to implement stack ops for push,pop,display,empty or full
#include<stdio.h>
#include<stdbool.h>
#define size 10
int top=-1;
void push(int stack[],int element){
	if(top == size - 1){
		printf("Stack Overflow");
		return;
	}
	else{
		stack[++top]=element;
	}
}

int pop(int stack[]){
	if(top == -1){
		printf("Stack Underflow");
		return;
	}
	else{
		return stack[top--];
	}
}

bool isFull(){
	if(top==size-1){
		printf("Stack Full \n");
		return 1;
	}
	else{
		printf("Stack is not full \n");
		return 0;
	}
}

bool isEmpty(){
	if(top==-1){
		printf("Empty Stack \n");
		return 1;
	}
	else{
		printf("Stack is not empty \n");
		return 0;
	}
}

void display(int stack[]){
	int temp;
	if(top == -1){
		printf("Stack Underflow");
	}
	else{
		temp=top;
		while(temp>=0){
			printf("%d ",stack[temp--]);
		}
	}
}

int main(){
	int stack[100],element;
	printf("Enter element to be inserted : ");
	scanf("%d",&element);
	push(stack,element);
	printf("Enter element to be inserted : ");
	scanf("%d",&element);
	push(stack,element);
	printf("Enter element to be inserted : ");
	scanf("%d",&element);
	push(stack,element);
	printf("Enter element to be inserted : ");
	scanf("%d",&element);
	push(stack,element);
	printf("%d \n",pop(stack));
	isFull();
	isEmpty();
	display(stack);
	printf("\n");
}
