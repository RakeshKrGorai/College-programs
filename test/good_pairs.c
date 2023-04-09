#include<stdio.h>
int main()
{
    int i,j,n,arr[100],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    
    return 0;
}
