#include <stdio.h>
#include <stdlib.h>
int main()  
{   char ch;
    FILE *file;
    int count = 0;
    char file_name[30];
    printf("Enter File Name : ");
    scanf("%s",file_name);
    //Opens a file in read mode  
    file = fopen(file_name,"r"); 
    while((ch=fgetc(file))!=EOF){
        if(ch ==' ' || ch == '\n'){
            count++;
        }
    } 
    printf("Number of words present in given file: %d", count);
    fclose(file); 
    return 0;
}  