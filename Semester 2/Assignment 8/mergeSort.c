//WAP to implement merge sort
#include<stdio.h>

void printArray(int arr[], int len);
void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main(){
	int len, arr[100],i;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d elements for array : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Before sorting : ");
	printArray(arr,len);
	mergeSort(arr,0,len-1);
	printf("After sorting : ");
	printArray(arr,len);
}

void printArray(int arr[], int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void mergeSort(int arr[], int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

void merge(int arr[], int low, int mid, int high){
	int i,j,k;
	int temp[30];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			k++;
			i++;
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
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
	for(i=low;i<=high;i++){
		arr[i]=temp[i];
	}
}
