#include<stdio.h>
int main()
{
    int arr[]={52,78,56,-79,12,-35,-64,20}, i, j, temp;
    for (i=0;i<8;++i){
            for (j=i+1;j<8;++j) {
                if (arr[i]<arr[j]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    for(i=0;i<8;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
