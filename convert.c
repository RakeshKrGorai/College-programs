// C Program to convert infix to postfix
#include <stdio.h>

// Defining stack stuff globally
#define size 100
int top1 = -1, top2 = -1;
char stack[size], postfix[size];

// Check Operator Precedency
int operator(char op)
{
	switch (op)
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

// A function to return last operator inserted, to check the precedence condition
char precedence()
{
	return stack[top1];
}

// Pop Function
char pop()
{
	if (top1 == -1)
	{
		return -1;
	}
	else
	{
		return stack[top1--];
	}
}

// Push
void push(char ch)
{
	if (operator(ch) != -1)
	{
		if (top1 == size - 1)
		{
			printf("Full");
		}
		else
		{
			while (operator(ch) <= operator(precedence()))
			{
				postfix[++top2] = pop();
			}
			stack[++top1] = ch;
		}
	}
	else
	{
		if (top2 == size - 1)
		{
			printf("Full");
		}
		else
		{
			postfix[++top2];
		}
	}
}

// Driver Code
int main()
{
	int i, j;
	char str[size];
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ')')
		{
			while (precedence() != '(')
			{
				postfix[++top2] = pop();
			}
		}
		else
		{
			push(str[i]);
		}
	}

	// Now, we pop every element from stack and push it to postfix
	while (top1 >= 0)
	{
		postfix[++top2] = stack[top1--];
	}
	postfix[++top2] = '\0';
	printf("%s", postfix);
	return 0;
}
