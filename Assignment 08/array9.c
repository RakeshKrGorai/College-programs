//Reverse array without using another array
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10}, i, temp, n=10;
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
