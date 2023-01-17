//Make Upper triangle values to zero
#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}, i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<=j){
				arr[i][j]=0;
			}
			else{
				continue;
			}
		}
	}
	//Printing Array
	for(i=0;i<rows;i++){
                for(j=0;j<column;j++){
                        printf("%d ", arr[i][j]);
                }
		printf("\n");
	}
	return 0;

}
