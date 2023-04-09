
#include<stdio.h>
int main()
{
    int n,i=0,j,digarr[]={0},arr[100],digit,cp,num=0,cnt=0;
    scanf("%d",&n);
    cp=n;
    //Reverse digit array
    while (cp){
        digit=cp%10;
        digarr[i++]=digit;
        printf("%d ",digit);
        cp/=10;
    }
    for(i=0;i<4;i++){
        printf("%d ",digarr[i]);
    }
    int len=sizeof(digarr)/sizeof(digarr[0]);
    printf("Len = %d \n",len);
    for(i=0;i<len;i++){
        if(digarr[i]==6){
            digarr[i]=9;
        }
        else if (digarr[i]==9){
            digarr[i]=6;
        }
        for(j=0;j<len;j++){
            num=num*10+digarr[i];
        }
        arr[cnt++]=num;
        if(digarr[i]==6){
            digarr[i]=9;
        }
        else if (digarr[i]==9){
            digarr[i]=6;
        }
    }
    //Check the real deal
    int max=arr[0];
    for(i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    
    
    return 0;
}
