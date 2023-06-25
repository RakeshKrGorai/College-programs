#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start=NULL, *newnode, *temp, *temp2;

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

void sort(){
	int switcher;
	temp=start;
	while(temp->next!=NULL){
		temp2=start;
		while((temp2->next)!=NULL){
			if((temp2->info)>(temp2->next->info)){
				switcher=temp2->info;
				temp2->info=temp2->next->info;
				temp2->next->info=switcher;
			}
			temp2=temp2->next;
		}
		temp=temp->next;
	}
	printf("%d\n ", temp->info);
	printf("%d\n", temp2->info);
	//Switch the last 2 unsorted nodes
	switcher=temp->info;
	temp->info=temp2->info;
	temp2->info=switcher;
	printf("Sorted\n");
}


int main(){
	int choice;
	while(1){
		printf("1. Insert an element\n2. Traverse\n3. Sort\n4. Exit\nEnter a choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				traverse();
				break;
			case 3:
				sort();
				break;
			case 4:
				return 0;
			default:
				printf("Entered wrong choice\n");
		}
	}
}
