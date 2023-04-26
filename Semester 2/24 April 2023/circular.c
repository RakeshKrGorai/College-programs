//Write a menu driven program to implement circular queue using array. It should have same ops as in Q1
#include<stdio.h>
#define size 10
int front=-1, rear=-1, queue[size];
void insert(int element){
	if((rear==size-1 && front ==0) || (front ==rear+1)){
		printf("Queue Overflow");
	}
	else{
		if(rear==-1){
			front++;
			rear++;
		}
		else if(rear==size-1){
			rear=0;
		}
		else{
			rear++;
		}
		queue[rear]=element;
	}
}

int delete(){
	if(front==-1){
		printf("Queue Underflow");
	}
	else{
		printf("Deleted Value : %d",queue[front]);
		if(front==size-1){
			front=0;
		}
		else if(front==rear){
			front++;
			rear++;
		}
		else{
			front++;
		}
	}
}

void display(){
	if(front==-1){
		printf("Queue Underflow");
	}
	else{
		int temp;
		if(rear<front){
			temp=front;
			while(temp<size){
				printf("%d ",queue[temp++]);
			}
			temp=0;
			while(temp<=rear){
				printf("%d ",queue[temp++]);
			}
			printf("\n");
		}
		else if(rear==front){
			printf("%d ",queue[front]);
		}
		else{
			temp=front;
			while(temp<=rear){
				printf("%d ", queue[temp++]);
			}
			printf("\n");
		}
	}
}

int main(){
	int choice,element;
	while(1){
		printf("1.Insert\n2.Delete\n3.Check if Full\n4.Check if Empty\n5.Display\n6.Exit\nEnter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter element to be inserted : ");
				scanf("%d",&element);
				insert(element);
				break;
			case 2:
				printf("%d",delete());
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
