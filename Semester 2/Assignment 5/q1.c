#include<stdio.h>
#include<math.h>
#define size 100
char stack[size];
int top=-1;

void push(int ch){
	if(top==size-1){
		printf("Rekt");
	}
	else{
		stack[++top]=ch;
	}
}

int pop(){
	if(top==-1){
		printf("Empty");
	}
	else{
		return stack[top--];
	}
}

int isDigit(int ch){
	return (ch>=48 && ch<=57);
}

int isAlpha(int ch){
	return ((ch>=65 && ch<=90)||(ch>=97 && ch<=122));
}

int main(){
	char str[size];
	int i,no1,no2, res;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		char ch = str[i];
		if(isDigit(ch)){
			push(ch - '0');
		}
		else if(isAlpha(ch)){
			push(ch);
		}
		else{
			no1=pop();
			no2=pop();
			switch(ch){
				case '+':
					res = no2+no1;
					break;
				case '-':
					res = no2-no1;
					break;
				case '*':
					res = no2*no1;
					break;
				case '/':
					res = no2/no1;
					break;
				case '^':
					res = pow(no2,no1);
					break;
			}
			push(res);
		}
	}
	printf("Final Result = %d\n",pop());
}
