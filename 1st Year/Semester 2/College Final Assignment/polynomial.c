// Write a program to implement addition of polynomials

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int coefficient;
    int exponent;
    struct node *next;
} node;

// Global variables used throughout in the program
node *start1 = NULL, *start2 = NULL, *temp, *ptr, *ptr1;

// Functions created in the program
node *create(node *start, int len);
void traverse(node *start);
void add();
void sort();

int main()
{
    int len1, len2;
    printf("Enter no of variables in equation 1 : ");
    scanf("%d", &len1);
    start1 = create(start1, len1);
    printf("Enter no of variables in equation 2 : ");
    scanf("%d", &len2);
    start2 = create(start2, len2);
    traverse(start1);
    traverse(start2);
    add();
    sort();
    traverse(start1);
}

node *create(node *start, int len)
{
    int i, cnt = 0, coefficient, exponent, x;
    for (i = 0; i < len; i++)
    {
        node *newnode;
        newnode = (node *)malloc(sizeof(node));
        printf("Enter value and exponent : ");
        scanf("%d %d", &coefficient, &exponent);
        newnode->coefficient = coefficient;
        newnode->exponent = exponent;
        newnode->next = NULL;
        if (start == NULL)
        {
            start = newnode;
            temp = start;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
    return start;
}

void traverse(node *start)
{
    if (start == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%dx^%d ", temp->coefficient, temp->exponent);
            temp = temp->next;
        }
        printf("\n");
    }
}

void add()
{
    ptr = start2;
    while (ptr != NULL)
    {
        temp = start1;
        int cnt = 0;
        while (temp != NULL)
        {

            if (ptr->exponent == temp->exponent)
            {
                temp->coefficient += ptr->coefficient;
                // increment cnt if both equation have same exponent variable
                cnt++;
            }
            ptr1 = temp;
            temp = temp->next;
        }
        // If one polynomial equation has a variable which is present in that equation only
        if (cnt == 0)
        {
            node *newnode;
            newnode = (node *)malloc(sizeof(node));
            newnode->coefficient = ptr->coefficient;
            newnode->exponent = ptr->exponent;
            newnode->next = NULL;
            ptr1->next = newnode;
        }
        ptr = ptr->next;
    }
}

void sort()
{
    int switcher;
    temp = start1;
    while (temp != NULL)
    {
        ptr = temp->next;
        while (ptr != NULL)
        {
            if (temp->exponent > ptr->exponent)
            {
                // Swapping coefficients for sorting
                switcher = temp->coefficient;
                temp->coefficient = ptr->coefficient;
                ptr->coefficient = switcher;
                // Swapping exponents for sorting
                switcher = temp->exponent;
                temp->exponent = ptr->exponent;
                ptr->exponent = switcher;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
}