#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *previous;
	struct node *next;
}node;

node *start= NULL, *temp, *newnode, *ptr;

void create(){
	if(start==NULL){
		start=(node *)malloc(sizeof(node));
		printf("Enter an element : ");
		scanf("%d", &start->info);
	}
	else{
		ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		newnode= (node *)malloc(sizeof(node));
		printf("Enter an element : ");
		scanf("%d",&newnode->info);
		ptr->next=newnode;
		newnode->next=NULL;
		newnode->previous=ptr;
		
	}
}

void traverse(){
	if(start==NULL){
		printf("List is empty (:|)");
	}
	else{
		temp=start;
		while(temp!=NULL){
			ptr=temp;
			printf("%d ", temp->info);
			temp=temp->next;
		}
		printf("\n");
		while(ptr!=NULL){
			printf("%d ", ptr->info);
			ptr=ptr->previous;
		}
		printf("\n");
	}
}

void insert_begin(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter element to insert : ");
	scanf("%d", &newnode->info);
	newnode->next=NULL;
	newnode->previous=NULL;
	if(start==NULL){
		start=newnode;
	}
	else{
		temp=start;
		newnode->next=temp;
		start=newnode;
		newnode->previous=NULL;

	}

}

void insert_end(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter element for insertion : ");
	scanf("%d", &newnode->info);
	if(start==NULL){
		start=newnode;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
		newnode->previous=temp;
	}
}

void insert_specific(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter element for insertion : ");
	scanf("%d", &newnode->info);
	newnode->previous=NULL;
	newnode->next=NULL;
	temp=start;
	int position,cnt=1;
	printf("Enter position for insertion : ");
	scanf("%d", &position);
	while(temp->next!=NULL && cnt!=position){
		ptr=temp;
		temp=temp->next;
		cnt++;
	}
	if(temp==NULL){
		printf("Not enough elements\n");
	}
	else if(position==1){
		newnode->next=start;
		newnode->previous=NULL;
		temp->previous=newnode;
		start=newnode;
	}
	else{
		newnode->next=temp->next;
		newnode->previous=temp;
		temp->next=newnode;
	}
}
		
void insert_after(){
	newnode=(node *)malloc(sizeof(node));
	printf("Enter element for insertion : ");
	scanf("%d", &newnode->info);
	newnode->previous=NULL;
	newnode->next=NULL;
	int element;
	printf("Enter the element after which this node is to be inserted : ");
	scanf("%d", &element);
	temp=start;
	while(temp->next!=NULL && temp->info!=element){
		ptr=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		printf("Element not found");
	}
	else{
	    if(temp->next==NULL){
	        temp->next=newnode;
	        newnode->previous=temp;
	    }
	    else{
	        ptr=temp->next;
	        newnode->next=temp->next;
	        newnode->previous=temp;
	        temp->next=newnode;
	        ptr->previous=newnode;
	    }
	}
}

void delete_begin(){
	if(start==NULL){
		printf("Empty list");
	}
	else{
		temp=start;
		start=temp->next;
		free(temp);
		start->previous=NULL;
	}
}

void delete_end(){
	
}

void delete_specific(){
	printf("");
}

void delete_after(){
	printf("");
}

int main(){
	int choice;
	while(1){
		printf("1. Create LL\n2. Traverse LL\n3. Insert at beginning\n4. Insert at end\n5. Insert at specific position\n");
		printf("6. Insert after a specific node\n7.Delete from beginning\n8.Delete from end\n9.Delete at a specific position\n10.Delete after a given node\n11.Exit\n");
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
				break;
		}
	}
}
