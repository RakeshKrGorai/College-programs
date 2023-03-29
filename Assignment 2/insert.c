#include<stdio.h>
int main(){
	int arr[50], index, size, element, index1;
	printf("Enter size of array : ");
	scanf("%d", &size);
	//Scanning
	printf("Enter %d values : ", size);
	for(index=0;index<size;index++){
		scanf("%d", &arr[index]);
	}
	//Taking input of to be inserted element, and its index
	printf("Enter element to be inserted : ");
	scanf("%d", &element);
	printf("Enter index value for the element : ");
	scanf("%d", &index1);
	//Inserting
	for(index=size;index>=index1;index--){
		arr[index+1]=arr[index];
	}
	size++;
	arr[index1]=element;
	//Printing
	printf("Element inserted, Updated Array : ");
	for(index=0;index<size;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
	return 0;
}
