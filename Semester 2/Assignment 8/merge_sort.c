#include<stdio.h>

void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);
void printArray(int arr[],int len);

int main(){
	int i, size, arr[100];
	printf("Enter size of array : ");
	scanf("%d", &size);
	printf("Enter %d elements : ", size);
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("Before Sorting : ");
	printArray(arr,size);
	mergeSort(arr,0,size-1);
	printf("After sorting : ");
	printArray(arr,size);
}

void mergeSort(int arr[], int low, int high){
	int mid;
	if(low<high){
		mid=(high+low)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}


void merge(int arr[], int low, int mid, int high){
	int temp[100], i,j,k;
	i=low;
	j=mid+1;
	k=0;
	while(i<=mid && j<=high){
		if(arr[i]>=arr[j]){
			temp[k]=arr[j];
			k++;
			j++;
		}
		else{
			temp[k]=arr[i];
			k++;
			i++;
		}
	}
	while(i<=mid){
		temp[k]=arr[i];
		k++;
		i++;
	}
	while(j<=high){
		temp[k]=arr[j];
		k++;
		j++;
	}
	//Copy elements in order from temp to original array
	for(i=low;i<=high;i++){
		arr[i]=temp[i];
	}
}

void printArray(int arr[], int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
