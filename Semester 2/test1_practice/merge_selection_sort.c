//Merge two array and sort resultant array using selection sort
#include<stdio.h>
int merge_sort(int arr1[],int arr2[],int arr[],int len1,int len2){
    int i,j,k=0,temp;
    for(i=0;i<len1;i++){
        arr[k++]=arr1[i];
    }
    for(i=0;i<len2;i++){
        arr[k++]=arr2[i];
    }
    //Sort
    for(i=0;i<(len1+len2)-1;i++){
        for(j=i+1;j<(len1+len2);j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Print
    for(i=0;i<(len1+len2);i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr1[]={5,4,3,2,1};
    int arr2[]={10,9,8,7,6};
    int arr[100];
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    merge_sort(arr1,arr2,arr,len1,len2);
    return 0;
}
