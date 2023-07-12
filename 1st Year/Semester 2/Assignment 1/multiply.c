#include<stdio.h>
int multiply(int arr[], int len){
	int index;
	//Multiplying each element
	for(index=0;index<9;index++){
		arr[index]=arr[index]*10;
	}
	//Printing
	printf("Updated Array : \n");
	for(index=0;index<len;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int len = 9;
	multiply(arr, len);
}
