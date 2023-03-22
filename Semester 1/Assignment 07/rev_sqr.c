#include<stdio.h>
int main()
{
    int num=1, rev=0, rev_sq, sq, cp1, cp2, digit, cnt=0;
    for(num;num<=100;num++){
        sq=num*num;
        cp1=num;
        while (cp1){
            digit=cp1%10;
            cp1/=10;
            rev=rev*10+digit;
        }
        rev_sq=rev*rev;
        cp2=rev_sq;
        while(cp2){
            digit=cp2%10;
            cp2/=10;
            cnt=cnt*10+digit;
        }
        if(cnt==sq){
            printf("%d \t", num);
        }
        rev=0;
        cnt=0;
    }
    
    return 0;
}
