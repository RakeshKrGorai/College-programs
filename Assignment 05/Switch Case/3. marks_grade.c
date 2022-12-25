//Wrong Code, Don't Copy
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
    else if(marks>=71 && marks<=79)
    {
        grade='A';
    }
    else if(marks>=61 && marks<=69)
    {
        grade='B';
    }
    else if(marks>=51 && marks<=59)
    {
        grade='C';
    }
    else if(marks>=41 && marks<=49)
    {
        grade='D';
    }
    else{
        grade='F';
    }
    printf("Grade : %c \n", grade);
    return 0;
}

