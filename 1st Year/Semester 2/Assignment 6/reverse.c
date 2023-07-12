#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start=NULL, *temp, *newnode, *last, *previous, *nxt;

void create(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter value to insert : ");
	scanf("%d", &newnode->info);
	newnode->next=NULL;
	if(start==NULL){
		start=newnode;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void traverse(){
	if(start==NULL){
		printf("No nodes present");
	}
	else{
		temp=start;
		while(temp!=NULL){
			printf("%d ", temp->info);
			temp=temp->next;
		}
		printf("\n");
	}
}

void reverse(){
    if(start->next!=NULL){
        previous=start;
        temp=start->next;
        while(temp->next!=NULL){
            nxt=temp->next;
            temp->next=previous;
            previous=temp;
            temp=nxt;
        }
        temp->next=previous;
        start->next=NULL;
        start=temp;
    }
}

int main(){
	int choice, value;
	while(1){
		printf("1. Insert an element\n2. Traverse\n3. Reverse\n4. Exit\nEnter a choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				traverse();
				break;
			case 3:
                reverse();
				break;
			case 4:
				return 0;
			default:
				printf("Entered wrong choice\n");
		}
	}
}
