//Given a array, print another array which treats element of first array as n and prints sum of n natural numbers
#include<stdio.h>
int main(){
    int i,arr[5];
    for(i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    int sum1=0,sum2=0,max=arr[0],min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]!=max){
            sum1+=arr[i];
        }
        if(arr[i]!=min){
            sum2+=arr[i];
        }
    }
    printf("%d %d",sum2,sum1);
}