//WAP to compare two strings without using any library functions
#include<stdio.h>
char cmpstr(char str1[], char str2[], int len);
char main()
{
    char str1[]="Madara";
    char str2[]="Uchiha";
    int len1=sizeof(str1)/sizeof(str1[0]);
    int len2=sizeof(str2)/sizeof(str2[0]);
    if(len1!=len2){
        printf("Strings not same \n");
    }
    else{
        cmpstr(str1, str2, len1);
    }  
}

char cmpstr(char str1[], char str2[], int len){
    int i, cnt=0;
    for(i=0;i<len;i++){
        if(str1[i]!=str2[i] ){
            printf("Strings not same \n");
            cnt++;
            break;
        }
        else{
            continue;
        }
    }
    if(cnt==0){
    printf("Strings are same. \n");
    }
}
