#include<stdio.h>
typedef struct student{
    char Name[30];
    int roll;
    float mark1;
    float mark2;
    float mark3;
}student;
int main()
{
    student details[10];
    int i;
    for(i=0;i<10;i++){
        printf("Enter Name of the student %d: ", i+1);
        scanf("%s", details[i].Name);
        printf("Enter Roll no: ");
        scanf("%d", &details[i].roll);
        printf("Enter Marks for subject 1 ");
        scanf("%f", &details[i].mark1);
        printf("Enter Marks for subject 2 ");
        scanf("%f", &details[i].mark2);
        printf("Enter Marks for subject 3 ");
        scanf("%f", &details[i].mark3);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("\n-----Student Details-----\n");
        printf("Name : %s \n", details[i].Name);
        printf("Roll no : %d \n", details[i].roll);
        printf("Subject 1 Marks : %.2f \n", details[i].mark1);
        printf("Subject 2 Marks : %.2f \n", details[i].mark2);
        printf("Subject 3 Marks : %.2f \n", details[i].mark3);
    }
    int counter;
    for(i=0;i<9;i++){
        if(details[i].mark3>details[i+1].mark3){
            counter = i;
        }
        else{
            counter=i+1;
        }
    }
    printf(" \nStudent With Highest Marks in Subject 3 : \n");
    printf("Name : %s \n", details[counter].Name);
    printf("Roll no : %d \n", details[counter].roll);
    printf("Subject 1 Marks : %.2f \n", details[counter].mark1);
    printf("Subject 2 Marks : %.2f \n", details[counter].mark2);
    printf("Subject 3 Marks : %.2f \n", details[counter].mark3);
    return 0;
}
