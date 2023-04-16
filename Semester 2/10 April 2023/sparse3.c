
#include <stdio.h>
void transposeSparse(int rowmajor[][3], int transpose[][3] ){
    int i,j, temp,k=0;
    //Swapping C1 and C2
    for(i=0;i<=rowmajor[0][2];i++){
        for(j=0;j<3;j++){
            if(j==0){
                transpose[i][j]=rowmajor[i][1];
            }
            else if(j==1){
                transpose[i][j]=rowmajor[i][0];
            }
            else{
                transpose[i][j]=rowmajor[i][j];
            }
        }
    }
    //Sort 2D array
    for(i=1;i<transpose[0][2];i++){
        for(j=i+1;j<=transpose[0][2];j++){
            if(transpose[i][0]>transpose[j][0]){
            	for(k=0;k<3;k++){
            		temp= transpose[i][k];
            		transpose[i][k]=transpose[j][k];
            		transpose[j][k]=temp;
            	}
            }
            else if(transpose[i][0]==transpose[j][0]){
            	if(transpose[i][1]>transpose[j][1]){
            	    for(k=0;k<3;k++){
            		    temp= transpose[i][k];
            		    transpose[i][k]=transpose[j][k];
            		    transpose[j][k]=temp;
            	    } 
            	}
            }
        }
    }
}
void readMatrix(int rowmajor[][3]){
    int row,i,j,col=3;
    printf("Enter no of rows of triplet matrix :");
    scanf("%d", &row);
    for(i=0;i<row;i++){
        printf("Enter 3 elements for row %d",i+1);
        for(j=0;j<col;j++){
            scanf("%d", &rowmajor[i][j]);
        }
    }
}

void displaySparse(int transpose[][3]){
    int i,j;
    for(i=0;i<=transpose[0][2];i++){
        for(j=0;j<3;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int transpose[100][3],rowmajor[100][3];
    readMatrix(rowmajor);
    transposeSparse(rowmajor,transpose);
    displaySparse(transpose);
    return 0;
}
