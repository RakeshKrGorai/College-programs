//WAP to print grade of student in math
#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter marks scored : ");
    scanf("%d", &marks);
    if (marks>=90 && marks<=100){
        grade= 'O';
    }
    else if(marks>=81 && marks<=89)
    {
        grade='E';
    }
    else if(marks>=81 && marks<=89)
    {
        grade='A';
    }
    
    

    return 0;
}
