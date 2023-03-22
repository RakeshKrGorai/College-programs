#include<stdio.h>
int main()
{
    int strength,i, total, high1, high2, high3, total1, index;
    printf("Enter strength of class : ");
    scanf("%d",&strength);
    int roll[strength], mark1[strength], mark2[strength], mark3[strength];
    for(i=0;i<strength;i++){
        printf("Enter roll no : ");
        scanf("%d", &roll[i]);
        printf("Enter marks in 3 subjects : ");
        scanf("%d %d %d", &mark1[i], &mark2[i], &mark3[i]);
    }
    high1=mark1[0];
    high2=mark2[0];
    high3=mark3[0];
    total1=mark1[0]+mark2[0]+mark3[0];
    
    for(i=0;i<strength;i++){
        //Part 1
        total=mark1[i]+mark2[i]+mark3[i];
        printf("Roll No : %d \t Total Marks : %d\n",roll[i], total);

        //Part 2
        if(high1<mark1[i]){
            high1=mark1[i];
        }
        if(high2<mark2[i]){
            high2=mark2[i];
        }
        if(high3<mark3[i]){
            high3=mark3[i];
        }

        //Part3
        if(total1<total){
            total1=total;
            index=i;
        }
    }
    printf("Highest Marks in subject 1 : %d\n", high1);
    printf("Highest Marks in subject 2 : %d\n", high2);
    printf("Highest Marks in subject 3 : %d\n", high3);
    printf("\nThe person with highest total marks is Roll No %d with total of %d marks\n",roll[index], total1);

    return 0;
}
