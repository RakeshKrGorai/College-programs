//WAP to implement quick sort

#include<stdio.h>

void printArray(int arr[], int len);
void swap(int *a, int *b);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);


int main(){
	int len, i, arr[100];
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d elements for array : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Before sorting : ");
	printArray(arr,len);
	quickSort(arr,0,len-1);
	printf("After sorting : ");
	printArray(arr, len);
}

void printArray(int arr[], int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void quickSort(int arr[], int low, int high){
	int position;
	if(low<high){
		position=partition(arr,low,high);
		quickSort(arr,low,position-1);
		quickSort(arr,position+1,high);
	}
}

int partition(int arr[], int low, int high){
	int pivot,i,j, temp;
	j=low;
	i=j-1;
	pivot=arr[high];
	while(j<high){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
		j++;
	}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}
