//WAP to sort an array
#include<stdio.h>
int sortArray(int arr[], int len);
int main(){
    int arr[]={10,65,78,61,11,3,46,8,9,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,len);
    printf("\n");
    return 0;
}
int sortArray(int arr[], int len){
    int temp, i, j;
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else{
                continue;
            }
        }
    }
    printf("Sorted Array : ")
    for(i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
}