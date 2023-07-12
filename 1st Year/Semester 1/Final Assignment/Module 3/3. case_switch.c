#include<stdio.h>
int main()
{
    char string[]="HelloWorld";
    int i;

    for(i=0;string[i]!='\0';i++){
        if(string[i]>=65 && string[i]<=90){
            string[i]+=32;
        }
        else if(string[i]>=97 && string[i]<=122){
            string[i]-=32;
        }
    }
    printf("Updated String : %s", string);
    return 0;
}
