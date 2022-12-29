//WAP to print numbers between 10 to 10000 where the digits of a number are equal(eg 11, 22,33 etc....)
#include<stdio.h>
int main()
{
    int num=10, i=0;
    int arr[]={0};
    for(num;num<=10;num+=10){
        int cp=num;
        while (cp)
        {
            int digit=cp%10;
            cp/=10;
            arr[i]=digit;
            i++;
        }
        for(int j=0;j<4;j++){
            printf("%d \n", arr[j]);
        }
        // int len= sizeof(arr)/sizeof(arr[i]);
        // printf("%d", len);
        // break;
        // i=0;
    }
    return 0;
}
