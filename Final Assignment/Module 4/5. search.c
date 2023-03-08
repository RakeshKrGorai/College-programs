#include<stdio.h>
int search(int element, int arr[], int len);
int main()
{
    int len, element, x;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    len=sizeof(arr)/sizeof(arr[0]);
    printf("Enter element to be searched : ");
    scanf("%d", &element);
    x = search(element, arr, len);
    if(x!=-1){
        printf("Element found at index %d", x);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
int search(int element, int arr[], int len){
    int i, cnt=0;
    for(i=0;i<len;i++){
        if(arr[i]==element){
            cnt++;
            return i;
            break;
        }
    }
    if(cnt==0){
        return -1;
    }
}