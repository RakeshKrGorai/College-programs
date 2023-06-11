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
	int element;
	if(start==NULL){
		printf("Nothing to delete here :)");
	}
	else{
		printf("Enter element after which a number is to be deleted : ");
		scanf("%d", &element);
		temp=start;
		while(temp!=NULL && temp->info!=element){
			previous=temp;
			temp=temp->next;
		}
		if(temp==NULL){
			printf("Ayo, that element is not present, retry");
		}
		else{
			previous=temp->next;
			temp->next=previous->next;
			free(previous);
		}
	}
}

int main(){
	int choice;
	while(1){
		printf("1. Create LL\n2. Traverse LL\n");
		printf("3. Delete from beginning\n4. Delete from end\n5. Delete from specific position\n6. Delete after specific node\n7. Exit\n");
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
				delete_begin();
				break;
			case 4:
				delete_end();
				break;
			case 5:
				delete_specific();
				break;
			case 6:
				delete_after();
				break;
			case 7:
				return 0;
			default:
				printf("Wrong Choice");
				break;
		}
	}
}
