//Insert element at a given index in a array
#include<stdio.h>
int main()
{
    int arr[100]={10,22,45,68,98,78,64,24,87,21};
    int index, num, i, n=10;
    printf("Enter number to be inserted : ");
    scanf("%d", &num);
    printf("Enter index (0-9) : ");
    scanf("%d", &index);
    n++;
    for(i=9;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=num;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
