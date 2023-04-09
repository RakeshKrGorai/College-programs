//Print sum of elements of array leaving maximum and minimum elements separately
#include<stdio.h>
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i-0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0,min=arr[0],max=arr[0];
    for (i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]!=max){
            sum1++;
        }
        if(arr[i]!=min){
            sum2++;
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
