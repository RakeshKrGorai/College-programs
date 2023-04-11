#include<stdio.h>
void readMatrix(int arr[][100],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		printf("Enter %d elements for row %d : ",col,i+1);
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void createSparse(int arr[][100],int row,int col,int triplet[][3]){
	int i,j,k=1,nzero=0;
	//Count no of zeroes
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]){
				nzero++;
			}
		}
	}
	triplet[0][0]=row;
	triplet[0][1]=col;
	triplet[0][2]=nzero;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]){
				triplet[k][0]=i;
				triplet[k][1]=j;
				triplet[k][2]=arr[i][j];
				k++;
			}
		}
	}
	
}
void displaySparse(int arr[][3]){

	int i,j;
	for(i=0;i<=arr[0][2];i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int triplet[100][3],arr[100][100],row,col;
	printf("Enter number of rows and columns of a sparse matrix : ");
	scanf("%d %d",&row,&col);
	readMatrix(arr,row,col);
	createSparse(arr,row,col,triplet);
	displaySparse(triplet);
}
