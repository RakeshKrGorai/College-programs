//WAP to create a function to insert 1 element in an array
#include<stdio.h>
int insertElement(int num, int pos, int arr[]);
int main()
{
    int num, pos;
    int arr[11]={10,20,30,40,50,60,70,80,90,100};
    printf("Enter element to be inserted : ");
    scanf("%d", &num);
    printf("Enter position (0-9) : ");
    scanf("%d", &pos);
    insertElement(num, pos, arr);
    return 0;
}
int insertElement(int num, int pos, int arr[]){
    int i;
    for(i=9;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(i=0;i<11;i++){
        printf("%d ", arr[i]);
    }
}