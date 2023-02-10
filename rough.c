#include<stdio.h>
int main(){
        char str1[]="HelloWorldProgrammingIsFun";
        char str2[]="Programming";
        int i, j, len=0, cnt=0;
        for(i=0;str1[i]!='\0';i++){
                len++;
        }
        printf("%d", len);
        return 0;
}
