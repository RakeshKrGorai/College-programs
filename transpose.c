#include<stdio.h>
int main(){
	int arr[100][3],transpose[100][3], i,j,row,col;
	printf("Enter no of rows and colums for the row major matrix : ");
	scanf("%d %d",&row,&col);
	//Taking Input for Row Major Matrix
	for(i=0;i<row;i++){
		printf("Enter %d values for row %d : ", col, i+1);
		for(j=0;j<col;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	//Making of Column Matrix
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j==0){
				transpose[i][j+1]=arr[i][j];
			}
			else if(j==1){
				transpose[i][j-1]=arr[i][j];
			}
			else{
				transpose[i][j]=arr[i][j];
			}
		}
	}
	//Sorting
	int temp;
	for(i=0;i<row-1;i++){
		for(j=0;j<col;j++){
			if(transpose[i][j]>transpose[i+1][j]){
				temp=transpose[][]

	//Print
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}

}
