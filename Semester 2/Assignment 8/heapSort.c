//WAP to implement heap sort algorithm in an array

#include<stdio.h>

void swap(int *val1, int *val2);
void heapSort(int arr[], int len);
void max_heapify(int arr[], int index, int size);
void printArray(int arr[], int len);

int main(){
	int i, len, arr[100];
	printf("Enter size of array : ");
	scanf("%d", &len);
	printf("Enter %d elements for array : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Before sorting : ");
	printArray(arr,len);
	heapSort(arr, len);
	printf("After sorting : ");
	printArray(arr,len);
}

//Swap function, parameters given : Addresses of 2 array elements, whose values are getting accessed using "*",
//and after that swap the values in the given addresses
void swap(int *val1, int *val2){
	int temp;
	temp=*val1;
	*val1=*val2;
	*val2=temp;
}

//Function to print array
void printArray(int arr[],int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ",arr[i] );
	}
	printf("\n");
}

void heapSort(int arr[], int len){
	int index, newsize;
	for(index=(len/2)-1;index>=0;index--){
		max_heapify(arr,index,len);
	}
	for(newsize=len-1;newsize>=0;newsize--){
		swap(&arr[0], &arr[newsize]);
	}
}

void max_heapify(int arr[], int index, int size){
	int largest=index;
	int left, right;
	left= 2*index+1;
	right=2*index+2;
	if(left<size && arr[left]>arr[largest]){
		largest=left;
	}
	if(right<size && arr[right]>arr[largest]){
		largest=right;
	}
	if(index!=largest){
		swap(&arr[index], &arr[largest]);
		max_heapify(arr,largest,size);
	}
}
