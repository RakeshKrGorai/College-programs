//WAP to print multiplication table of a number n
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++){
        printf("%d\t X %d\t = %d\n", num, i, num*i);
    }
    return 0;
}
