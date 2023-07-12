#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, rev=0, digit_cnt=0, copy, digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    copy= num;
    while(copy){
        copy=copy/10;
        digit_cnt++;
    }
    for(i=0;i<digit_cnt;i++){
        digit=num%10;
        rev+=digit*pow(10,digit_cnt-1-i);
        num=num/10;
    }
    printf("%d", rev);
    return 0;
}
