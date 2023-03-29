#include<stdio.h>
int main(){
	int arr[50], index, size, index1;
	printf("Enter size of array : ");
	scanf("%d", &size);
	//Scanning
	printf("Enter %d values : ", size);
	for(index=0;index<size;index++){
		scanf("%d", &arr[index]);
	}
	//Taking input of index
	printf("Enter index value for the element to be deleted : ");
	scanf("%d", &index1);
	//Deleting
	for(index=index1;index<size;index++){
		arr[index]=arr[index+1];
	}
	size--;
	//Printing
	printf("Updated Array : ");
	for(index=0;index<size;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
	return 0;
}
