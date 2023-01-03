#include<stdio.h>
int main(){
	int arr3[10], len, i=0;
	int arr1[10]={1,2,3,4,5};
	int arr2[10]={6,7,8,9,10};
	len=sizeof(arr1)/sizeof(arr1[0]); 		//Considering length of both arrays to be equal
	for(i=0;i<len;i++){
		arr3[i]= arr1[i]*arr2[i];
	}
	for(i=0;i<len;i++){
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
}
