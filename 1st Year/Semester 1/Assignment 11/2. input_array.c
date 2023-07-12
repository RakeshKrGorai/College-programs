//WAP to create a function to take user input into an array
#include<stdio.h>
int inputArray(int elements, int arr[]);
int main()
{
    int elements;
    printf("Enter number of elements : ");
    scanf("%d", &elements);
    int arr[elements];
    inputArray(elements, arr);
    printf("\n");
    return 0;
}
int inputArray(int elements, int arr[]){
    int i=0; 
    for(i;i<elements;i++){
        printf("Enter : ");
        scanf("%d", &arr[i]);
    }
    printf("Done, Your Array is : ");
    //Print Array
    for(i=0;i<elements;i++){
        printf("%d ", arr[i]);
    }
}
