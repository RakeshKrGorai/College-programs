#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n){
    int a=0, b=1, i, result;
    for(i=0;i<=n;i++){
        printf("%d ", a);
        result=a+b;
        a=b;
        b=result;
    }
}
