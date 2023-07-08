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
				min(root);
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
	printf("Minimum element : %d\n", temp->info);
	return temp;
}

void max(node *root){
	temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	printf("Maximum element : %d\n", temp->info);
}

/*void delete(node *root){
	if(root==NULL){
		printf("Empty list");
	}
	else{
		int element;
		temp=root;
		ptr=NULL;
		printf("Enter element to be searched : ");
		scanf("%d", &element);
		while(temp!=NULL){
			ptr=temp;
			if(temp->info>element){
				temp=temp->left;
			}
			else if(temp->info<element){
				temp=temp->right;
			}
			else if(temp->info==element){
				if(temp->left == NULL && temp->right == NULL){
					zero_node(root,temp,ptr);
				}
				else if(temp->left != NULL || temp->right != NULL){
					one_node(root,temp,ptr);
				}
				else{
					two_node(root,temp,ptr);
				}
			}
		}
	}
}

void zero_node(node *root, node *temp, node *ptr){
	if(ptr==NULL){
		root=NULL;
		free(temp);
	}
	else if(temp==ptr->left){
		ptr->left=NULL;
	}
	else{
		ptr->right=NULL;
	}
	free(temp);
}

void one_node(node *root, node *temp, node *ptr){
	node *child;
	if(temp->left!=NULL){
		child=temp->left;
	}
	else{
		child=temp->right;
	}
	if(ptr==NULL){
		root=child;
	}
	else if(temp==ptr->left){
		ptr->left=child;
	}
	else{
		ptr->right=child;
	}
	free(temp);
}

void two_node(node *root, node *temp, node *ptr){
	node *child, *parent;
	child=temp;
	while(child->left!=NULL){
		parent=child;
		child=child->left;
	}
	temp->info=child->info;
	if(child->right==NULL){
		zero_node(root,child,parent);
	}
	else{
		one_node(root,child,parent);
	}
}
*/

node *delete(node *tree, int key){
	if(tree==NULL){
		printf("Tree does not exist\n");
	}
	else{
		if(key<tree->info){
			tree->left=delete(tree->left,key);
		}
		else if(key>tree->info){
			tree->right=delete(tree->right,key);
		}
		else if(key==tree->info){
			if(tree->left==NULL && tree->right==NULL){
				free(tree);
				return NULL;
			}
			else if(tree->left==NULL || tree->right==NULL){
				temp=tree;
				if(tree->left==NULL){
					tree=tree->right;
				}
				else if(tree->right==NULL){
					tree=tree->left;
				}
				free(temp);
			}
			else if(tree->left!=NULL && tree->right!=NULL){
				temp=min(tree->right);
				tree->info=temp->info;
				tree->right=delete(tree->right,tree->info);
			}
			return tree;
		}
	}
}

