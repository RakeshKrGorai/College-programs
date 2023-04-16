#include<stdio.h>
void createSparse(int row_major[][3], int row,int sparse[][100]){
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
void readMatrix(int row_major[][3], int row){
	int i,j,col=3;
	printf("Enter The Sparse Matrix obtained previously \n");
	for(i=0;i<row;i++){
		printf("Enter %d elements for row %d : ", col,i
+1);
		for(j=0;j<col;j++){
			scanf("%d", &row_major[i][j]);
		}
	}
}
void check(int sparse[][100],int original[][100],int row,int col){
	int i,j,c=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(sparse[i][j] != original[i][j]){
				c++;
				printf("Different");
				break;
			}
			else{
				continue;
			}
		}
	}
	if(c==0){
		printf("Same");
	}
}
int main()
{
    int original[100][100]={{0,0,3,0,0},{4,0,0,0,0},{0,9,0,8,0},{0,0,7,0,0},{8,0,0,7,0},{0,0,6,0,4}};
    int row_major[100][3],row,col,sparse[100][100];
    printf("Enter no of rows obtained in output matrix above :");
    scanf("%d",&row);
    readMatrix(row_major,row);
    createSparse(row_major,row,sparse);
    row=row_major[0][0];
    col=row_major[0][1]
    check(sparse,original,row,col);
}
