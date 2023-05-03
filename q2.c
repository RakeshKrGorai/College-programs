//Convert infix to postfix using stack.((A-(B+C))*D)^(E/F)
#include<stdio.h>

#define size 100
int top1=-1;
char stack[size],postfix[size];

int precedence(char ch){
	switch(ch){
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
}

int checker(char ch){
	while(precedence(ch)<=precedence(stack[top1])){
		int x=pop();
		push(x,postfix,top2);
	}
	push(ch,stack,top1);
}


int isAlphabet(char ch){
	return ((ch>=65 && ch<=90)||(ch>=97 && ch<=122));
}

int isDigit(char ch){
	return (ch>=48 && ch<=57);
}

void push(char ch,char arr[],int top){
	if(top==size-1){
		printf("Overflow");
	}
	else{
		arr[++top]=ch;
	}
}

char pop(){
	if(top1==-1){
		printf("Stack Underflow");
	}
	else{
		return stack[top--];
	}
}

int main(){
	char arr[size];
	printf("Enter infix expression : ");
	scanf("%[^\n]",arr);
	int i,x;
	for(i=0;arr[i]!='\0';i++){
		if(isAlphabet || isDigit){
			push(arr[i],postfix,top2);
		}
		else if(arr[i]=='('){
			push(arr[i],stack,top1);
		}
		else if(arr[i]==')'){
			while(stack[top]!='('){
				

		else{
			checker(arr[i]);
		}
	}
}
