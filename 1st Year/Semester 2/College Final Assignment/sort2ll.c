#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} node;

node *start1 = NULL, *start2 = NULL, *start3 = NULL, *temp, *ptr, *ptr1;

node *create(node *start, int value);
void traverse(node *start);
void sort();
void singleSort(node *start);

int main()
{
    int choice, value;
    while (1)
    {
        printf("1. Enter element in LL 1\n2. Enter element in LL 2\n3. Traverse\n4. Sort\n5. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to enter : ");
            scanf("%d", &value);
            start1 = create(start1, value);
            break;
        case 2:
            printf("Enter value to enter : ");
            scanf("%d", &value);
            start2 = create(start2, value);
            break;
        case 3:
            traverse(start1);
            traverse(start2);
            break;
        case 4:
            sort();
            printf("Sorted Array : ");
            traverse(start3);
            break;
        case 5:
            return 0;
        default:
            printf("Wrong choice\n");
        }
    }
}

node *create(node *start, int value)
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->info = value;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    return start;
}

void traverse(node *start)
{
    temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

void sort()
{
    singleSort(start1);
    singleSort(start2);
    // After both linked lists are sorted
    while (start1 != NULL && start2 != NULL)
    {
        if (start1->info > start2->info)
        {
            start3 = create(start3, start2->info);
            temp = start2;
            start2 = start2->next;
            free(temp);
        }
        else
        {
            start3 = create(start3, start1->info);
            temp = start1;
            start1 = start1->next;
            free(temp);
        }
    }
    while (start1 != NULL)
    {
        create(start3, start1->info);
        temp = start1;
        start1 = start1->next;
        free(temp);
    }
    while (start2 != NULL)
    {
        create(start3, start2->info);
        temp = start2;
        start2 = start2->next;
        free(temp);
    }
}

void singleSort(node *start)
{
    int switcher;
    temp = start;
    while (temp->next != NULL)
    {
        ptr = start;
        while ((ptr->next) != NULL)
        {
            if ((ptr->info) > (ptr->next->info))
            {
                switcher = ptr->info;
                ptr->info = ptr->next->info;
                ptr->next->info = switcher;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
}