//Reverse elements of array without using another array
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90}, temp, i, len=9;
    for(i=0;i<len/2;i++){
        temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
    for(i=0;i<9;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}