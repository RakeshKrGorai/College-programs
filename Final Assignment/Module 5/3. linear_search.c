#include<stdio.h>
int linearSearch(int *ptr, int size, int element);
int main()
{
    int *ptr, size, element;
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    size=sizeof(arr)/sizeof(arr[0]);
    ptr=&arr[0];
    printf("Enter element to search : ");
    scanf("%d", &element);
    linearSearch(ptr, size, element );
    return 0;
}
int linearSearch(int *ptr, int size, int element){
    int i, cnt=0;
    for(i=0;i<size;i++){
        if(*(ptr+i)==element){
            printf("Element Found at %d position", i+1);
            cnt++;
        }
    }
    if(cnt==0){
        printf("Element not found");
    }
}