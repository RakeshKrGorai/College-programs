#include<stdio.h>
int sum(int num1, int num2);
int diff(int num1, int num2);
int product(int num1, int num2);
int division(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);
    int ch;
    printf("\n1.Sum\n2.Difference\n3.Product\n4.Division\nEnter your choice : ");
    scanf("%d", &ch);
    if(ch==1){
        sum(num1,num2);
    }
    else if(ch==2){
        diff(num1,num2);
    }
    else if(ch==3){
        product(num1,num2);
    }
    else if(ch==4){
        division(num1,num2);
    }
    return 0;
}

int sum(int num1, int num2){
    printf("Sum : %d", num1+num2);
}
int diff(int num1, int num2){
    printf("Difference : %d", num1-num2);
}
int product(int num1, int num2){
    printf("Product : %d", num1*num2);
}
int division(int num1, int num2){
    printf("Value : %d", num1/num2);
}