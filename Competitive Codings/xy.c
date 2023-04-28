#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0,res[100],counter=0;
    int arr2[100],arr3[100];
    scanf("%d", &n);
    for(i=0;i<2*n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    printf("\n");
    for(i=n;i<(2*n);i++){
        arr3[k++]=arr[i];
    }
    k=0,i=0;
    for(i=0;i<2*n;i=i+2){
        res[i]=arr2[k++];
    }
    k=0;
    for(i=1;i<2*n;i+=2){
        res[i]=arr3[k++];
    }
    for(i=0;i<2*n;i++){
        printf("%d ",res[i]);
    }
    return 0;
}
