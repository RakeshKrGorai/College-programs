//Completed, but working only without \n, with \n code fucks, will be updating asap
//Find Odd, Eve, +ve and -ve numbers in an Array
#include<stdio.h>
int main()
{
    int arr[]={52,78,56,-79,12,-35,-64,20}, i=0, len;
    len=sizeof(arr)/sizeof(arr[0]);
    for(i;i<len;i++){
        if (arr[i]>0){
            if(arr[i]%2==0){
                printf("Even & Positive Number : %d", arr[i]);
            }
            else{
                printf("Odd & Positive Number : %d", arr[i]);
            }
        }
        else{
            if(arr[i]%2==0){
                printf("Even & Positive Number : %d", arr[i]);
            }
            else{
                printf("Odd & Positive Number : %d", arr[i]);
            }
        }
    }
    return 0;
}
