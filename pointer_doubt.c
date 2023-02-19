//WAP to write some strings and arrange them in dictionary order using user defined function having pointer as argument
//It only switches first alphabets, not complete string.
#include<stdio.h>
#include<string.h>
char stringSorting(char str[100][100], char *temp, char *temp2);
int main()
{
    char *temp, *temp2;
    char str[100][100]={{"Hello"}, {"World"},{"Programming"},{"Is"},{"Fun"}};
    stringSorting(str,temp, temp2);
    for(int i=0;i<6;i++){
        printf("%s \n", str[i]);
    }
    return 0;
}

char stringSorting(char str[100][100], char *temp, char *temp2){
    int i, j;
    for(int i=0;i<5;i++){
        temp=str[i];
        for(j=i+1;j<5;j++){
            temp2=str[j];
            if ((int)strcmp(str[i],str[j])>1){
                char *temp3 = *temp;
                *temp = *temp2;
                *temp2 = temp3;
                break;
            }
        }
    }
    
}
