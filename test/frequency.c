//WAP to print occurrences of digits in a string 
#include<stdio.h>
int main()
{
    char str[100],ch;
    scanf("%s",str);
    int i,j;
    int len=sizeof(str)/sizeof(str[0]);
    for(i=0;i<=9;i++){
        int digit=48+i;
        int freq=0;
        for(j=0;j<len;j++){
            if((int)str[j]==digit){
                freq++;
            }
        }
        printf("%d ",freq);
    }
    return 0;
}
