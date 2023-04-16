//Row Major Matrix to Sparse Matrix
#include<stdio.h>
int sparse(int row_major[100][3], int row){
    int sparse[100][100];
    int row1,col,i,j,k=1;
    row1=row_major[0][0];
    col=row_major[0][1];
    for(i=0;i<row1;i++){
        for(j=0;j<col;j++){
            if(i==row_major[k][0] && j==row_major[k][1]){
                sparse[i][j]=row_major[k][2];
                k++;
            }
            else{
                sparse[i][j]=0;
            }
        }
    }
    //Print
    for (i=0;i<row1;i++){
        for(j=0;j<col;j++){
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
    }
    
}
int readMatrix(int rowmajor[][3], int row){
	printf("Enter The Sparse Matrix obtained previouly");
	for(i=0;i<row;i++){
		printf("Enter %d elements for row %d : ", col,i
+1);
		for(j=0;j<col;j++){
			scanf("%d", &row_major[i][j]);
		}
	}
}
int main()
{
    int i,j,row,col=3,row_major[100][3];
    printf("Enter no of rows obtained in output matrix above :");
    scanf("%d",&row);
    readMatrix(row_major,row);
    sparse(row_major,row);
}
