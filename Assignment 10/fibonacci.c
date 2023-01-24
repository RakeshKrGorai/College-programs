//WAP to print fibonacci
#include<stdio.h>

int printFibonacci(int n);
int first=1, second=0, sum=0, i=0, n;

int main()
{
    //Write a program in C to print the Fibonacci series using recursion.
    printf("Enter no of elements : ");
    scanf("%d", &n);
    printf("%d ", first);
    printFibonacci(n);
    printf("\n");
    return 0;
}

int printFibonacci(int n)
{
    if (i<=n)
    {
        sum = first + second;
        printf("%d ", sum);
        second = first;
        first = sum;
        i++;
        printFibonacci(n);
    }
}
