#include<stdio.h>
int printArray(int arr[], int len);
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int len=sizeof(arr)/sizeof(arr[0]);
	printArray(arr, len);
	return 0;
}
int printArray(int arr[], int len){
	//int len=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
