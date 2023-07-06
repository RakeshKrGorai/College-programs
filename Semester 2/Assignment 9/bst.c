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
void printPreorder(node* node);
void printPostorder(node* node);
void search(node *root);
void min(node *root);
void max(node *root);

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
				printf("Preorder Traversal: ");
				printPreorder(root);
				printf("\n");
				printf("Postorder Traversal: ");
				printPostorder(root);
				printf("\n");
				break;
			case 4:
				search(root);
				break;
			case 5:
				max(root);
				break;
			case 6:
				min(root);
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

void printPreorder(node *root){
	if(root==NULL)
		return;
	printf("%d ", root->info);
	printPreorder(root->left);
	printPreorder(root->right);
}

void printPostorder(node *root){
	if(root==NULL){
		return;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	printf("%d ", root->info);
}

void search(node *root){
	int element, cnt =0;
	if(root==NULL){
		printf("Empty list\n");
	}
	else{
		printf("Enter element to be searched : ");
		scanf("%d", &element);
		temp=root;
		while(temp!=NULL){
			if(temp->info>element){
				temp=temp->left;
			}
			else if(temp->info<element){
				temp=temp->right;
			}
			else if(temp->info==element){
				printf("Element found\n");
				cnt++;
				break;
			}
		}
		if(cnt==0){
			printf("Element not found\n");
		}
	}
}

void min(node *root){
	temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	printf("Minimum element : %d\n", temp->info);
}

void max(node *root){
	temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	printf("Maximum element : %d\n", temp->info);
}

void delete(node *root){
	if(root==NULL){
		printf("Empty list");
	}
}
