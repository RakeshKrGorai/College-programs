#include<stdio.h>
int main()
{
    int arr1[]={2,6,21};
    int arr2[]={6,8,12,15};
    int arr[]={0}, i, j;
    int len=7;
    int cnt=0;
    for(i=0;i<len;i++){
        while(arr1[i] && arr2[i]){
            if(arr1[i]<arr2[i]){
                arr[cnt++]=arr1[i];
            }
            else if(arr2[i]<arr1[i])
        }
    }
    return 0;
}
