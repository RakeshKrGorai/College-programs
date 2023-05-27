#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start=NULL, *temp, *previous;

void create(){
	if(start==NULL){
		start=(node *)malloc(sizeof(node));
		printf("Enter an element : ");
		scanf("%d", &start->info);
	}
	else{
		previous=start;
		while(previous->next!=NULL){
			previous=previous->next;
		}
		temp= (node *)malloc(sizeof(node));
		printf("Enter an element");
		scanf("%d",&temp->info);
		temp->next=NULL;
		previous->next=temp;

		//Print
		printf("%d", previous->next);
	}
}

void traverse(){
	printf("Not completed yet");
}

void insert_begin(){
	printf("Not completed yet");
}

void insert_end(){
	printf("Not completed yet");
}

void insert_specific(){
	printf(" ");
}

void insert_after(){
	printf(" ");
}

void delete_begin(){
	printf(" ");
}

void delete_end(){
	printf(" ");
}

void delete_specific(){
	printf(" ");
}

void delete_after(){
	printf(" ");
}

int main(){
	int choice;
	while(1){
		printf("1. Create LL\n2. Traverse LL\n3. Insert at beginning\n4.Insert at end\n5.Insert at specific position\n");
		printf("6. Insert after a specific node\n7. Delete from beginning\n8. Delete from end\n9. Delete from specific position\n10. Delete after specific node\n11.Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				traverse();
				break;
			case 3:
				insert_begin();
				break;
			case 4:
				insert_end();
				break;
			case 5:
				insert_specific();
				break;
			case 6:
				insert_after();
				break;
			case 7:
				delete_begin();
				break;
			case 8:
				delete_end();
				break;
			case 9:
				delete_specific();
				break;
			case 10:
				delete_after();
				break;
			case 11:
				return 0;
			default:
				printf("Wrong Choice");
		}
	}
}
