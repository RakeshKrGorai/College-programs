//WAP to check whether a string is pallindrome or not
#include<stdio.h>
int main()
{
    int len, i, cnt=0;
    char str[20];
    printf("Enter String : ");
    scanf("%s", str);
    for (len=0;str[len]!='\0';len++);
    for(i=0;i<len/2;i++){
        if(str[i]==str[len-i-1]){
            continue;
            cnt=0;
        }
        else{
            printf("Not a Pallindrome String \n");
            cnt++;
            break;
        }
    }
    if(cnt==0){
        printf("Pallindrome String \n");
    }

    return 0;
}
