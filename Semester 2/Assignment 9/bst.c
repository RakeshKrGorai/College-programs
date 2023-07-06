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
	int choice;
	while(1){
		printf("1. Create BST\n2. Insert a node\n3. Traverse\n4. Search\n5. Find maximum node\n6. Find minimum node\n7. Delete node\n8. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				//root=create(root);
				break;
			case 2:
				root = insert_node(root);
				break;
			case 3:
				// traverse(root);
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

/*node *create(node *root){
	if(root!=NULL){
		printf("Binary Search is already created, you can try inserting new nodes\n");
	}
	else{
		int len;
		printf("Enter no of elements to be inserted : ");
		scanf("%d",&len);
		insert(root,len);
	}
	return root;
}*/


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
				printf("Duplicate");
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

void traverse(node *root){
	if(root == NULL){
		printf("Empty\n");
	}
	temp=root;
	traverse(temp->left);
	printf("%d ", temp->info);
	traverse(temp->right);
}

void printInorder(node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printInorder(node->left);
 
    // Then print the data of node
    printf("%d ", node->info);
 
    // Now recur on right child
    printInorder(node->right);
}
