#include<stdio.h>
int main()
{
    int row, column, i, j, min, max;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &row, &column);
    if(row!=column){
        printf("Rows and columns should be same, retry\n");
    }
    else{
        int arr[row][column];
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                printf("Enter element :");
                scanf("%d", &arr[i][j]);
            }
        }
        max=arr[0][0];
        min=max;
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
                if(i==j){
                    if(max<arr[i][j]){
                        max=arr[i][j];
                    }
                    if(min>arr[i][j]){
                        min=arr[i][j];
                    }
                }
            }
        }
        printf("Major Diagonal Element : %d\n", max);
        printf("Minor Diagonal Element : %d\n", min);
    }
    return 0;
}
