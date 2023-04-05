//WAP to insert an element in an array using function
#include<stdio.h>
int insert(int element, int len, int arr[], int position){
	int i;
	for(i=len;i>=position;i--){
		arr[i+1]=arr[i];
	}
	arr[position-1]=element;
	//Print
	for(i=0;i<len+1;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int i, element, len, arr[100], position;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d elements of array : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter element to be inserted : ");
	scanf("%d", &element);
	printf("Enter its position : ");
	scanf("%d", &position);
	insert(element, len, arr, position);
}
