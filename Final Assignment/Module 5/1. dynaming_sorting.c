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
        int i=0, j=0, temp;
        printf("Enter %d values : ", len);
        for(i=0;i<len;i++){
            scanf("%d", array+i);
        }
        for(i=0;i<len-1;i++){
            for(j=i+1;j<len;j++){
                if(*(array+i)>*(array+j)){
                    temp=*(array+i);
                    *(array+i)=*(array+j);
                    *(array+j)=temp;
                }
                else{
                    continue;
                }
            }
        }
        printf("Your Sorted Array is : \n");
        for(i=0;i<len;i++){
            printf("%d ",*(array+i));
        }
    }
}