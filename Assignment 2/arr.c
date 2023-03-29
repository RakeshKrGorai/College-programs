#include<stdio.h>
int main(){
	int arr[50], index, size;
	printf("Enter size of array : ");
	scanf("%d", &size);
	//Scanning
	for(index=0;index<size;index++){
		printf("Enter : ");
		scanf("%d", &arr[index]);
	}
	//Printing
	for(index=0;index<size;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
	return 0;
}
