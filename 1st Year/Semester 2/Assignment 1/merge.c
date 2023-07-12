#include<stdio.h>
int merge(int arr1[100], int arr2[100],int len1,int len2){
	int i, arr[200], counter=0;
	//Merging Array
	for(i=0;i<len1;i++){
		arr[counter++]=arr1[i];
	}
	for(i=0;i<len2;i++){
		arr[counter++]=arr2[i];
	}
	//Print
	printf("Merged Array : ");
	for(i=0;i<(len1+len2);i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr1[100],arr2[100],i, len1, len2;
	//Input for 1st array
	printf("Enter length of array 1 : ");
	scanf("%d", &len1);
	printf("Enter %d values : ", len1);
	for(i=0;i<len1;i++){
		scanf("%d", &arr1[i]);
	}
	//Input for 2nd array
	printf("Enter length of array 2 : ");
	scanf("%d", &len2);
	printf("Enter %d values : ", len2);
	for(i=0;i<len2;i++){
		scanf("%d", &arr2[i]);
	}
	merge(arr1,arr2,len1,len2);
}


