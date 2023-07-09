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
void printInorder(node* root);
void printPreorder(node* root);
void printPostorder(node* root);
void search(node *root);
node * min(node *root);
void max(node *root);
node *delete(node *root, int key);

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
				ptr=min(root);
				printf("Minimum element:%d\n", ptr->info);
				break;
			case 7:
				int key;
				printf("Enter value to delete : ");
				scanf("%d", &key);
				delete(root,key);
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

node *min(node *root){
	temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}

void max(node *root){
	temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	printf("Maximum element : %d\n", temp->info);
}

node *delete(node *root, int key){
	if(root==NULL){
		printf("root does not exist\n");
	}
	else{
		if(key<root->info){
			root->left=delete(root->left,key);
		}
		else if(key>root->info){
			root->right=delete(root->right,key);
		}
		else if(key==root->info){
			if(root->left==NULL && root->right==NULL){
				free(root);
				return NULL;
			}
			else if(root->left==NULL || root->right==NULL){
				temp=root;
				if(root->left==NULL){
					root=root->right;
				}
				else if(root->right==NULL){
					root=root->left;
				}
				free(temp);
			}
			else if(root->left!=NULL && root->right!=NULL){
				node *sparent=root;
				node *successor=root->right;
				while (successor->left!=NULL){
					sparent=successor;
					successor=successor->left;
				}
				if(sparent!=root){
					sparent->left=successor->right;
				}
				else{
					sparent->right=successor->right;
				}
				root->info=successor->info;
				free(successor);
			}
			return root;
		}
	}
}

