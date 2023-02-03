//WAP to create a function to search value in an array
#include<stdio.h>
int searchElement(int arr[], int element);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0}, element;
    printf("Enter element to be searched : ");
    scanf("%d", &element);
    searchElement(arr, element);
    return 0;
}
int searchElement(int arr[], int element){
    int i, cnt=0;
    for(i=0;i<10;i++){
        if(arr[i]==element){
            printf("Element found at %d position", i);
            cnt++;
            break;
        }
        else{
            continue;
        }
    }
    if(cnt==0){
        printf("Element not found");
    }
}
