#include <stdio.h>
#include <stdlib.h>
int main()  
{   char ch;
    FILE *file;
    int count = 0;
    //Opens a file in read mode  
    file = fopen("data.txt","r"); 
    while((ch=fgetc(file))!=EOF){
        if(ch ==' ' || ch == '\n'){
            count++;
        }
    } 
    printf("Number of words present in given file: %d", count);
    fclose(file); 
    return 0;
}  