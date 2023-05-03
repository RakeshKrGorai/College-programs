// Convert infix to postfix using stack.

#include <stdio.h>
#define size 100
int top1 = -1;
char stack[size], postfix[size];

int precedence(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	case '^':
		return 3;
	default:
		return -1;
	}
}

int isAlphabet(char ch)
{
	return ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
}

int isDigit(char ch)
{
	return (ch >= 48 && ch <= 57);
}

void push(char ch)
{
	if (top1 == size - 1)
	{
		printf("Overflow");
	}
	else
	{
		stack[++top1] = ch;
	}
}

char pop()
{
	if (top1 == -1)
	{
		printf("Underflow");
	}
	else
	{
		return stack[top1--];
	}
}

int main()
{
	char arr[size];
	printf("Enter infix expression : ");
	scanf("%[^\n]", arr);
	// scanf("%s",arr);
	int i, top = 0;
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (isAlphabet(arr[i]) || isDigit(arr[i]))
		{
			postfix[top++] = arr[i];
		}
		else if (arr[i] == '(')
		{
			push(arr[i]);
		}
		else if (arr[i] == ')')
		{
			while (stack[top1] != '(')
			{
				postfix[top++] = pop();
			}
			pop();
		}

		else
		{
			while (precedence(arr[i]) <= precedence(stack[top1]))
			{
				postfix[top++] = pop();
			}
			push(arr[i]);
		}
	}
	// Now remaining stack stuff pop and push
	while (top1 >= 0)
	{
		postfix[top++] = pop();
	}
	postfix[top] = '\0';
	printf("%s", postfix);
}
