//WAP to check grade of steel as per question
#include<stdio.h>
int main()
{
    int hardness, strength, grade;
    float content;
    printf("Enter hardness of steel : ");
    scanf("%d", &hardness);
    printf("Enter carbon content of steel : ");
    scanf("%f", &content);
    printf("Enter tensile strength of steel : ");
    scanf("%d", &strength);
    if (hardness>50 && content<0.7 && strength>5600){
        grade=10;
    }
    else if(hardness>50 && content<0.7 && strength<5600){
        grade=9;
    }
    else if(hardness<50 && content<0.7 && strength>5600){
        grade=8;
    }
    else if(hardness>50 && content>0.7 && strength>5600){
        grade=7;
    }
    else if(hardness>50 || content<0.7 || strength>5600){
        grade=6;
    }
    else{
        grade=5;
    }
    printf("Steel with given details has a %d grade", grade);
    return 0;
}
