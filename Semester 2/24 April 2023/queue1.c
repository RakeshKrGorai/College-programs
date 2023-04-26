#include<stdio.h>
#include<stdbool.h>
#define size 100
int front=-1,rear=-1,queue[size];

void insert(int element){
	if(rear==size-1){
		printf("Queue Overflow");
	}
	else{
		if(rear==-1){
			rear++;
			front++;
		}
		else{
			rear++;
		}
	queue[rear]=element;
	}
}

int delete(){
	if(front==-1 || front ==rear+1){
		printf("Queue Underflow");
	}
	else{
		return queue[front++];
	}
}

bool isFull(){
	if(rear==size-1){
		printf("Queue is Full\n");
	}
	else{
		printf("Queue is not full\n");
	}
}

bool isEmpty(){
	if(front==-1 || front==rear+1){
		printf("\nEmpty Queue\n");
	}
	else{
		printf("\nQueue is not empty\n");
	}
}

void display(){
	if(front==-1 || front ==rear+1){
		printf("Queue Underflow\n");
	}
	else{
		int temp=front;
		while(temp<=rear){
			printf("%d ",queue[temp++]);
		}
		printf("\n");
	}
}

int main(){
	int choice,element;
	while(1){
		printf("1.Insert ELement\n2.Delete element\n3.Check if Full\n4.Check if Empty\n5.Display Queue\n6.exit\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter element to be inserted : ");
				scanf("%d",&element);
				insert(element);
				break;
			case 2:
				printf("%d \n",delete());
				break;
			case 3:
				isFull();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				display();
				break;
			case 6:
				return 0;
			default:
				printf("Wrong Choice");
		}
	}
}
