#include<stdio.h>
#define size 100
int top=-1;

void push(char stack[],char element){
	if(top == size - 1){
		printf("Stack Overflow");
		return;
	}
	else{
		stack[++top]=element;
	}
}

char pop(char stack[]){
	if(top == -1){
		printf("Stack Underflow");
	}
	else{
		return (stack[top--]);
	}
}

int main(){
	char stack[size],element[size],x;
	int i,c=0,j;
	printf("Enter string : ");
	scanf("%s",element);
	for(i=0;element[i]!='\0';i++){
		push(stack,element[i]);
	}
	for(j=0;j<i;j++){
		x=pop(stack);
		if(x!=element[j]){
			printf("Not Pallindrome");
			c++;
			break;
		}
		else{
			continue;
		}
	}
	if(c==0){
		printf("Pallindrome");
	}
	printf("\n");
}
