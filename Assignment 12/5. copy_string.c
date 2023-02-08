//WAP to copy one string to another string using user defined function
char strcopy(char str1[], char str[]);
#include<stdio.h>
int main()
{
    char str1[20]={0}, str[20]={0};
    printf("Enter String : ");
    scanf("%s", str1);
    strcopy(str1, str);
    return 0;
}

char strcopy(char str1[], char str[]){
    int i;
    for(i=0;str1[i]!='\0';i++){
        str[i]=str1[i];
    }
    //str[i]='\0';
    printf("Copied String : ");
    //Printing Copied String
    printf("%s", str);
}