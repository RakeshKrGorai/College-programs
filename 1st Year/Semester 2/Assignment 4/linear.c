//WAP to implement Linear Queue using stacks
#include<stdio.h>
#define size 10
int top1=-1,top2=-1,stack1[size],stack2[size];

void push(){
	if(top1==size-1){
		printf("Stack Overflow");
	}
	else{
		int element;
		printf("Enter element to be inserted : ");
		scanf("%d", &element);
		stack1[++top1]=element;
	}
}

int delete(){
	if(top1==-1){
		printf("Stack Underflow");
	}
	else{
		int temp=top1;
		top2=-1;
		while(temp>=0){
			stack2[++top2]=stack1[temp--];
		}
		return stack2[top2--];
	}
}

void display(){
	if(top1==-1){
		printf("Stack Underflow");
	}
	else{
		int temp=top2;
		while(temp>=0){
			printf("%d ",stack2[temp--]);
		}
		printf("\n");
	}
}
int main(){
	push();
	push();
	push();
	push();
	push();
	printf("%d \n",delete());
	display();
}
