//Find maximum and minimum element in a matrix
#include<stdio.h>
int main(){
        int arr[3][3]={{78,45,69},{45,32,79},{108,57,63}},i,j, min, max;
        min=arr[0][0];
        max=arr[0][0];
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        if(max<arr[i][j]){
                            max=arr[i][j];
                        }
                        else if(min>arr[i][j]){
                            min=arr[i][j];
                        }
                }
        }
        printf("Max : %d \n", max);
        printf("Min : %d \n", min);
        return 0;
}

