//WAP to check whether a string is a substring of another string.
#include<stdio.h>
int main()
{
        char str1[]="HelloWorldProgrammingIsFun";
        char str2[]="Prorammings";
        int i, len=0, cnt=0, j;
        for(i=0;str1[i]!='\0';i++){
                len++;
        }
        for(i=0;i<len;i++){
                if(str1[i]==str2[i]){
                        for(j=i;j<len;j++){
                                if(str1[j]==str2[j]){
                                        cnt=0;
                                        continue;
                                }
                                else{
                                        cnt++;
                                        break;
                                }
                        }
                }
                else{
                        continue;
                }
        }
        if(cnt==0){
                printf("String 2 is a substring of String 1 \n");
        }
        else{
                printf("String 2 is not a substring of String 1 \n");
        }
        return 0;
}
