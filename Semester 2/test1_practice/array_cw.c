//Rotate array n number of times (Clockwise)
#include<stdio.h>
int rotate(int arr[],int len,int n){
    int i,temp;
    while(n){
        temp=arr[len-1];
        for(i=len-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
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
