#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *top=NULL, *temp, *newnode, *last, *previous, *nxt;

void push(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter value to insert : ");
	scanf("%d", &newnode->info);
	newnode->next=NULL;
	if(top==NULL){
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
}

void traverse(){
	if(top==NULL){
		printf("No nodes present");
	}
	else{
		temp=top;
		while(temp!=NULL){
			printf("%d ", temp->info);
			temp=temp->next;
		}
		printf("\n");
	}
}

void pop(){
    if(top==NULL){
		printf("No element exist\n");
	}
	else{
		temp=top;
		top=top->next;
		printf("Poppped element : %d\n",temp->info);
		free(temp);
	}
}

int main(){
	int choice, value;
	while(1){
		printf("1. Insert an element\n2. Traverse\n3. Pop\n4. Exit\nEnter a choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				traverse();
				break;
			case 3:
                pop();
				break;
			case 4:
				return 0;
			default:
				printf("Entered wrong choice\n");
		}
	}
}
