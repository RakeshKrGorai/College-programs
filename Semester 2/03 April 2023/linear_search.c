//WAP to search an element in the array using linear search function
#include<stdio.h>
int linear_search(int arr[], int element, int len){
	int i, counter=0;
	for(i=0;i<len;i++){
		if(arr[i]==element){
			printf("Element Found \n");
			counter++;
		}
	}
	if(counter==0){
		printf("Element not found \n");
	}

}
int main(){
	int element, len, arr[100],i;
	printf("Enter length of array : ");
	scanf("%d",&len);
	//Taking Input
	printf("Enter %d values : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter element to be searched : ");
	scanf("%d", &element);
	//Function Call
	linear_search(arr,element,len);
}
