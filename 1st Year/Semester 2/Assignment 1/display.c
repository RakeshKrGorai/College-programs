#include<stdio.h>
int display(int arr[], int len){
	int index=0;
	for(index=0;index<len;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
}
int input(int arr[], int len){
	int index;
	printf("Enter %d elements : ", len);
	for(index=0; index<len;index++){
		scanf("%d", &arr[index]);
	}
}
int main(){
	int arr[10];
	int index=0, len;
	printf("Enter length of array : ");
	scanf("%d", &len);
	input(arr, len);
	display(arr, len);
	return 0;
}
		
