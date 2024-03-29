//WAP to dynamically accept length of integer array, insert and delete one element in that array using realloc, and traverse it using function
#include<stdio.h>
#include<stdlib.h>
int delete(int n, int num, int *array);
int insert(int n, int num1, int pos, int *array);
int main()
{
    int n;
    printf("Enter length of integer array : ");
    scanf("%d", &n);
    int *array = malloc(n*sizeof(int));
    if(array==NULL){
        printf("Memory not allocated!");
    }
    else{
        int i=0, j=0, temp;
        printf("Enter %d values : ", n);
        for(i=0;i<n;i++){
            scanf("%d", array+i);
        }

    }
    //Delete
    int num;
    printf("Enter a number to delete : ");
    scanf("%d", &num);
    delete(n, num, array);
    //Insert
    int num1, pos;
    printf("\nEnter number and position of the element to be inserted : ");
    scanf("%d %d", &num1, &pos);
    insert(n, num1, pos, array);
    return 0;
}

int delete(int n, int num, int *array){
    int i=0, j;
    for(i;i<n;i++){
        if(array[i]==num){
            for(j=i+1;j<n;j++){
                array[j-1]=array[j];
            }
            
            n=n-1;
            array=realloc(array,sizeof(int)*n);
            printf("Element Deleted \nUpdated Array : ");
            for(i=0;i<n;i++){
                printf("%d ",*(array+i));
            }
        }
        else{
            continue;
        }
    }
}
int insert(int n, int num1, int pos, int *array){
    int i;
    array=realloc(array, sizeof(int)*n);
    for(i=n-1;i>=pos-1;i--){
        *(array+i+1)=*(array+i);
    }
    array[pos-1]=num1;
    printf("Element Inserted \nUpdated Array: ");
    for(i=0;i<n;i++){
        printf("%d ",*(array+i));
    }
}
