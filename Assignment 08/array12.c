#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}, i, temp;
    for(i=0;i<9-1;i+=2){        //-1 for proper iteration
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<9;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
