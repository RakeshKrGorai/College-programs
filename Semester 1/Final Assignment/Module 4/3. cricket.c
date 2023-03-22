#include<stdio.h>
typedef struct cricketer{
    char Name[30];
    char country[30];
    int matches;
    int run;
    int wickets;
    int catches;
}cricketer;
int main(){
    
    cricketer details[5];
    int i, index;
    float batting_avg;
    //User input for cricketer details
    for(i=0;i<5;i++){
        printf(" \nEnter Player %d details :\n", i+1);
        printf("Enter name of cricketer : ");
        scanf("%s", details[i].Name);
        printf("Enter name of country : ");
        scanf("%s", details[i].country);
        printf("Enter number of matches : ");
        scanf("%d", &details[i].matches);
        printf("Enter runs taken : ");
        scanf("%d", &details[i].run);
        printf("Enter wickets taken : ");
        scanf("%d", &details[i].wickets);
        printf("Enter catches taken : ");
        scanf("%d", &details[i].catches);
    }
    batting_avg= (float)details[0].run/details[0].matches;
    //Part1
    for(i=1;i<5;i++){
        float counter = (float)details[i].run/details[i].matches;
        if(counter>batting_avg){
            batting_avg= counter;
            index=i;
        }
        else{
            continue;
        }
    }
    printf("\n------Highest Batting Average-----\n");
    printf("Name : %s \n", details[index].Name);
    printf("Country : %s \n", details[index].country);
    printf("Batting Average : %.2f\n ", batting_avg);
    
    //Part 2
    printf("\nPlayers With 0 catches yet are: \n");
    for(i=0;i<5;i++){
        if(details[i].catches==0){
            printf("%s\n", details[i].Name);
        }
    }
    
    return 0;
}