//WAP to check whether a square matrix is symmetrical or not(matrix and transpose same)
#include<stdio.h>
int main()
{
    //Making a matrix and finding its transpose
    int arr1[3][3]={{2,3,6},{3,4,5},{6,5,9}}, arr[3][3]={0}, i, j, temp, counter=0;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
           arr[i][j]=arr1[j][i];
        }
    }
    //Checking for symmetrical behaviour
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if (arr[i][j]==arr1[i][j]){
                    continue;
                }
                else{
                    counter++;
                    break;
                }
        }
    }
    if(counter==0){
        printf("Symmetric Matrix \n");
    }
    else{
        printf("Not a Symmetric Matrix \n");
    }
    return 0;
}
