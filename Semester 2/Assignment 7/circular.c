//Circullar LL
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start=NULL, *ptr, *temp, *newnode;

void create(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter value for insertion : ");
	scanf("%d", &newnode->info);
	if(start==NULL){
		newnode->next=newnode;
		start=newnode;
	}
	else{
		temp=start;
		while(temp->next!=start){
			temp=temp->next;
		}
		newnode->next=start;
		temp->next=newnode;
	}
}

void traverse(){
	temp=start;
	/*do{
		printf("%d", temp->info);
		temp=temp->next;
	}while(temp->next!=start);*/
	printf("%d ", temp->info);
	temp=temp->next;
	while(temp!=start){
		printf("%d ", temp->info);
		temp=temp->next;
	}
	printf("\n");
}

void insert_after(){
	int element;
	newnode=(node *)malloc(sizeof(node));
	printf("Value for insertion :");
	scanf("%d", &newnode->info);
	printf("Enter node value after which it is to be inserted : ");
	scanf("%d", &element);
	temp=start;
	while(temp->next!=start && temp->info!=element){
		ptr=temp;
		temp=temp->next;
	}
	if(temp->next==start && temp->info!=element){
		printf("No element found");
	}
	else if(temp->next==start && temp->info==element){
		newnode->next=start;
		temp->next=newnode;
	}
	else{
		newnode->next=temp->next;
		ptr->next=newnode;
	}
}

void delete_specific(){
	printf(" ");
}

int main(){
	int choice;
	while(1){
		printf("1.Create Circular LL\n2.Traverse Circular LL\n3.Insert after a given node\n4.Delete a specific node\n5.Exit\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				traverse();
				break;
			case 3:
				insert_after();
				break;
			case 4:
				delete_specific();
				break;
			case 5:
				return 0;
			case 6:
				printf("Wrong Choice");
		}
	}
}
