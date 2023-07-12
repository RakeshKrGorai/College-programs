#include <stdio.h>
int main()
{
    int len1,len2,len,i=0,j=0,k=0;
    int arr1[5]={11,22,33,44,55}, arr2[6]={10,20,30,40,50,60}, arr[20];
    len1=sizeof(arr1)/sizeof(arr1[0]);
    len2=sizeof(arr2)/sizeof(arr2[0]);
    len=len1+len2;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
  
    while (i < len1)
        arr[k++] = arr1[i++];
  
    while (j < len2)
        arr[k++] = arr2[j++];
    
    printf("Final array after merging: ");
    for(int i = 0; i < len ; i++)
        printf(" %d ",arr[i]);
    return 0;   
}