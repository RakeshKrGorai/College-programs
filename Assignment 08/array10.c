#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},low=0,high=9,mid, num;
    printf("Enter a number to search : ");
    scanf("%d", &num);
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==num){
            printf("Found at %d position", mid);
            break;
        }
        else{
            if(arr[mid]<num){
                low=mid+1;
            }
            else if(num<arr[mid]){
                high=mid-1;
            }
        }
        
    }
    return 0;
}
