#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start=NULL, *temp, *previous, *newnode;

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
	}
}

void traverse(){
	if(start==NULL){
		printf("List is empty (:|)");
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

void insert_begin(){
	int value;
	temp=(node *)malloc(sizeof(node));
	printf("Enter a value to insert : ");
	scanf("%d", &value);
	temp->info=value;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		temp->next=start;
		start=temp;
	}
}

void insert_end(){
	int value;
	newnode=(node *)malloc(sizeof(node));
	printf("Enter value : ");
	scanf("%d", &value);
	newnode->info=value;
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

void insert_specific(){
	int value, position, cnt=1;
        newnode=(node *)malloc(sizeof(node));
        printf("Enter value : ");
        scanf("%d", &value);
        newnode->info=value;
	newnode->next=NULL;
        if(start==NULL){
                start=newnode;
        }
        else{
		printf("Enter position for insertion : ");
		scanf("%d", &position);
		temp=start;
		while(temp!=NULL && cnt!=position){
			previous=temp;
			temp=temp->next;
			cnt++;
		}
		if(temp==NULL && position!=cnt){
			printf("Error...Vacant positions will occur...\n");
		}
		else if(position==1){
			newnode->next=start;
			start=newnode;
		}
			
		else{
			newnode->next=temp;
			previous->next=newnode;
		}
	}
}

void insert_after(){
	int value, element;
	newnode=(node *)malloc(sizeof(node));
	printf("Enter value for insertion : ");
	scanf("%d",  &value);
	newnode->info=value;
	newnode->next=NULL;
	if(start==NULL){
		printf("Empty List, no values here...\n");
	}
	else{
		printf("Enter element after which value is to be inserted : ");
		scanf("%d", &element);
		temp=start;
		while(temp!=NULL && temp->info!=element){
			temp=temp->next;
		}
		if(temp==NULL){
			printf("No such element exists in this list\n");
		}
		else{
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
}

void delete_begin(){
	if(start==NULL){
		printf("Empty List");
	}
	else{
		temp=start;
		start=start->next;
		free(temp);
	}
}

void delete_end(){
	if(start==NULL){
		printf("Empty!");
	}
	else{
                temp = start;
                while((temp->next)->next!=NULL){
                        temp=temp->next;
                }
		free((temp->next)->next);
                temp->next=NULL;
        }

}

void delete_specific(){
	int position,cnt=1;
	if(start==NULL){
		printf("Nothing to delete here :/");
	}
	else{
		printf("Enter position to delete : ");
		scanf("%d", &position);
		temp=start;
		if(position==1){
			start=start->next;
			free(temp);

		}
		else{
			while(temp->next!=NULL && cnt!=position){
				previous=temp;
				temp=temp->next;
				cnt++;
			}
			if(temp==NULL && cnt!=position){
				printf("Oops, Not enough elements to traverse through...retry");
			}
			else{
				previous->next=temp->next;
				free(temp);
			}
		}
	}

}

void delete_after(){
	printf(" ");
}

int main(){
	int choice;
	while(1){
		printf("1. Create LL\n2. Traverse LL\n3. Insert at beginning\n4. Insert at end\n5. Insert at specific position\n");
		printf("6. Insert after a specific node\n7. Delete from beginning\n8. Delete from end\n9. Delete from specific position\n10. Delete after specific node\n11. Exit\n");
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
				free(previous);
				free(newnode);
				return 0;
			default:
				printf("Wrong Choice");
				break;
		}
	}
}
