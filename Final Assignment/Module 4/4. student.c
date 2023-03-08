#include<stdio.h>
typedef struct student
{
    int roll;
    char name[30];
    int branch;
    float cgpa;
}student;

int main()
{
    student details[20];
    int i, j, arr[20], temp;
    //Input Data
    for(i=0;i<5;i++){
        printf("Enter Roll No. : ");
        scanf("%d", &details[i].roll);
        printf("Enter Name : ");
        scanf("%s", details[i].name);
        printf("Enter Branch Code : ");
        scanf("%d", &details[i].branch);
        printf("Enter CGPA obtained : ");
        scanf("%f", &details[i].cgpa);
        arr[i]=i;
    }
    for (i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(details[i].cgpa<details[j].cgpa){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<20;i++){
        printf("Roll- %d\t Name- %s\t CGPA- %.2f \n", details[(arr[i])].roll, details[(arr[i])].name, details[(arr[i])].cgpa);
    }
    
    return 0;
}
