//WAP to print grade of student in math
#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter marks scored : ");
    scanf("%d", &marks);
    switch(marks/10){
        case 10:
            grade='O';
            break;
        case 9:
            grade='O';
            break;
        case 8:
            grade='E';
            break;
        case 7:
            grade='A';
            break;
        case 6:
            grade='B';
            break;
        case 5:
            grade='C';
            break;
        case 4:
            grade='D';
            break;
        default:
            grade='F';
            break;
    }
    printf("Grade : %c \n", grade);
    return 0;
}