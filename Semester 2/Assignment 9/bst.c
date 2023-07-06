//WAP to implement Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *left, *right;
}node;

node *temp, *ptr;

node *create(node *root);
void traverse(node *root);
node *insert_node(node *root);
void printInorder(node* node);

int main(){
	node *root=NULL;
	int choice,len,i;
	while(1){
		printf("1. Create BST\n2. Insert a node\n3. Traverse\n4. Search\n5. Find maximum node\n6. Find minimum node\n7. Delete node\n8. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter no of elements : ");
				scanf("%d",&len);
				for(i=0;i<len;i++){
					root=insert_node(root);
				}
				break;
			case 2:
				root = insert_node(root);
				break;
			case 3:
				printf("Inorder Traversal: ");
				printInorder(root);
				printf("\n");
				
				break;
			case 4:
				//search();
				break;
			case 5:
				//max();
				break;
			case 6:
				//min();
				break;
			case 7:
				//delete();
				break;
			case 8:
				return 0;
			default:
				printf("Invalid input\n");
		}
	}
}


node *insert_node(node *root){
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	printf("Enter node : ");
	scanf("%d", &newnode->info);
	newnode->right=NULL;
	newnode->left=NULL;
	if(root==NULL){
		root=newnode;
	}
	else{
		temp=root;
		while(temp!=NULL){
			ptr=temp;
			if(temp->info>newnode->info){
				temp=temp->left;
			}
			else if(temp->info<newnode->info){
				temp=temp->right;
			}
			else{
				printf("Duplicate\n");
				break;
			}
		}
		if(temp==NULL){
			if(ptr->info>newnode->info){
				ptr->left=newnode;
			}
			else{
				ptr->right=newnode;
			}
		}
	}
	return root;
}

void printInorder(node* root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    printf("%d ", root->info);
    printInorder(root->right);
}
