//WAP to dynamically accept length of integer array and traverse it using function
#include<stdio.h>
#include<stdlib.h>
int dynamic(int len);
int main()
{
    int n;
    printf("Enter length of integer array : ");
    scanf("%d", &n);
    dynamic(n);
    return 0;
}
int dynamic(int len){
    int *array = malloc(len*sizeof(int));
    if(array==NULL){
        printf("Memory not allocated!");
    }
    else{
        int i=0;
        printf("Enter %d values : ", len);
        for(i=0;i<len;i++){
            scanf("%d", array+i);
        }
        printf("Your Array is : \n");
        for(i=0;i<len;i++){
            printf("%d ",*(array+i));
        }
    }
}