#include<stdio.h>
int main(){
	int size, arr[50], element, index, counter=0;
	printf("Enter size of array : ");
	scanf("%d", &size);
	//Scanning
	printf("Enter %d values : ", size);
	for(index=0;index<size;index++){
		scanf("%d", &arr[index]);
	}
	//Input to be searched element
	printf("Enter element to be searched :");
	scanf("%d", &element);
	//Searching Loop
	for(index=0;index<size;index++){
		if(arr[index]==element){
			counter++;
			printf("Element found\n");
			break;
		}
	}
	if(counter==0){
		printf("Element not found\n");
	}
}

