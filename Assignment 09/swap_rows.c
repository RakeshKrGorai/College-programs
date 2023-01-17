//Swap two rows in an array
#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,temp;
	//Swapping Row 2 & 3
	for(i=1;i<2;i++){
		for(j=0;j<3;j++){
			temp=arr[i][j];
			arr[i][j]=arr[i+1][j];
			arr[i+1][j]=temp;
		}
	}
	//Printing Result
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d ", arr[i][j]);
                }
                printf("\n");
        }
	return 0;
}
