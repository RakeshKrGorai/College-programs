#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *next;    
}node;

node *start1=NULL, *start2=NULL, *start3=NULL, *temp, *ptr, *newnode;


node *create(node *start, int value){
	newnode=(node *)malloc(sizeof(node));
	newnode->info=value;
	newnode->next=NULL;
	if(start==NULL){
		start=newnode;
        return start;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void traverse(node *start){
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

void merge(){
    
    while(start1!=NULL && start2!=NULL){
        if(start1->info>start2->info){
            if(start3==NULL){
                start3=create(start3,start2->info);
            }
            else{
                create(start3,start2->info);
            }
            temp=start2;
            start2=start2->next;
            free(temp);
        }
        else{
            if(start3==NULL){
                start3=create(start3,start1->info);
            }
            else{
                create(start3,start1->info);
            }
            temp=start1;
            start1=start1->next;
            free(temp);
        }
    }
    while(start1!=NULL){
        create(start3,start1->info);
        temp=start1;
        start1=start1->next;
        free(temp);
    }
    while(start2!=NULL){
        create(start3,start2->info);
        temp=start2;
        start2=start2->next;
        free(temp);
    }
}

int main(){
	int choice, value;
	while(1){
		printf("1. Insert an element in Linked List 1\n2. Insert an element in Linked List 2\n3. Traverse LL\n4. Merge\n5. Exit\nEnter a choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
                printf("Enter value to enter : ");
                scanf("%d", &value);
                if(start1==NULL){
				    start1= create(start1,value);
                }
                else{
                    create(start1,value);
                }
				break;
            case 2:
                printf("Enter value to enter : ");
                scanf("%d", &value);
                if(start2==NULL){
				    start2= create(start2,value);
                }
                else{
                    create(start2,value);
                }
                break;
			case 3:
				traverse(start1);
                traverse(start2);
				break;
			case 4:
				merge();
				printf("Merged Array : ");
				traverse(start3);
				break;
			case 5:
				return 0;
			default:
				printf("Entered wrong choice\n");
		}
	}
}
