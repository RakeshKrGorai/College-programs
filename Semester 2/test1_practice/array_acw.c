//Rotate n times anticlockwise
#include<stdio.h>
int rotate(int arr[],int len,int n){
    int i,temp;
    while(n){
        temp=arr[0];
        for(i=1;i<len;i++){
            arr[i-1]=arr[i];
        }
        arr[len-1]=temp;
        n--;
    }
    //Print
    for(i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n;
    printf("Enter number of times to rotate CW : ");
    scanf("%d",&n);
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,len,n);
    return 0;
}