//WAP to implement stack ops for push,pop,display,empty or full
#include<stdio.h>
#define size 10
int top=-1;
void push(int stack[]){
	if(top == size - 1){
		printf("Stack Overflow");
		return;
	}
	else{
		int element;
		printf("Enter element to be inserted : ");
		scanf("%d",&element);
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
		printf("\n");
	}
}

int main(){
	int choice,stack[size];
	while(1){
		printf("1.Push an Element\n2.Pop an element\n3.Display element\n4.exit\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push(stack);
				break;
			case 2:
				printf("%d \n",pop(stack));
				break;
			case 3:
				display(stack);
				break;
			case 4:
				return 0;
			case 5:
				printf("Wrong Choice, retry");
		}
	}

}
