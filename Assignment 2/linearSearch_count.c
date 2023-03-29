//WAP to check if element is present or not. If present, print no of times and index
#include<stdio.h>
int main(){
	int size, index, arr[50], element, freq=0, pos[50];
	printf("Enter size of array : ");
	scanf("%d", &size);
	//Scanning
	for(index=0;index<size;index++){
		printf("Enter : ");
		scanf("%d", &arr[index]);
	}
	//Input to be searched element
	printf("Enter element to be searched : ");
	scanf("%d", &element);
	for(index=0;index<size;index++){
		if(arr[index]==element){
			pos[freq++]=index;
		}
	}
	if(freq){
		printf("Element is found %d times at index ", freq);
		for(index=0;index<freq;index++){
			printf("%d, ", pos[index]);
		}

	}
	else{
		printf("Element not found");
	}
	printf("\n");
}
