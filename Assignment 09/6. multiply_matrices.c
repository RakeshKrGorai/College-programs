//Multiply 2 matrices
#include<stdio.h>
int main()
{
   int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}}, arr2[3][3]={{10,11,12},{13,14,15},{16,17,18}}, arr[3][3]={0}, i, j, k, sum;
   for(i=0;i<3;i++){
		for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum+=arr1[i][k]*arr2[k][j];
            }
            arr[i][j]=sum;
            sum=0;
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
