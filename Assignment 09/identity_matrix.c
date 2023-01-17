//Identity matrix
#include<stdio.h>
int main(){
	int rows, column, i, j;
	printf("Enter no of rows : ");
	scanf("%d", &rows);
	printf("Enter no of columns : ");
        scanf("%d", &column);
	int arr[rows][column];
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			if(i==j){
				arr[i][j]=1;
			}
			else{
				arr[i][j]=0;
			}
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
	
