#include<stdio.h>
#include<stdlib.h>

void Xstrcpy(char *string);
int main()
{
    char *string = malloc(50*sizeof(char));
    if(string==NULL){
        printf("Memory not allocated!");
    }
    else{
        printf("Enter a string : ");
        scanf("%s", string);
        Xstrcpy(string);
        free(string);
        return 0;
    }
}
void Xstrcpy(char *string){
    int i;
    char *copy_string=malloc(50*sizeof(char));
    if(copy_string==NULL){
        printf("Memory not allocated!");
    }
    else{
        for(i=0;string[i]!='\0';i++){
            *(copy_string+i)= *(string+i);
        }
        copy_string[i]='\0';
        printf("Copied String : %s", copy_string);
        free(copy_string);
    }
}