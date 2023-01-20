#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},l=0,r=9,m, num;
    printf("Enter a number to search : ");
    scanf("%d", &num);
    m=(l+r)/2;
    while(l<=r){
        if(arr[m]==num){
            printf("Found at %d position", m);
        }
        else if(num>arr[m]){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    


    return 0;
}
