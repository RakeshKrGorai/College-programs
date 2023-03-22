//Print Transpose of Matrix
#include<stdio.h>
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}}, arr[3][3]={0}, i, j, temp;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
           arr[i][j]=arr1[j][i];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}
