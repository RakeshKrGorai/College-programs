#include<stdio.h>
int merge_sort(int arr1[100],int arr2[100], int len1, int len2){
	int arr[100],i=0,j=0,k=0;
	//Conditions to iterate with all elements in both arrays
	while(i<len1 && j<len2){
			if(arr1[i]<arr2[j]){
				arr[k++]=arr1[i];
				i++;
				//The if statement below works when the two given sorted arrays are of different length,which might be the case
				if(i==len1 && j<len2){
					for(i=j;i<len2;i++){
						arr[k++]=arr2[i];
					}
				}

			}
			else if(arr1[i]>arr2[j]){
				arr[k++]=arr2[j];
				j++;
				//The if statement below works when the two given sorted arrays are of different length,which might be the case
				if(i<len1 && j==len2){
					for(j=i;j<len1;j++){
						arr[k++]=arr1[j];
					}
				}
			}
	}
	//PRINTING THE FINAL SORTED ARRAY!!!YAY!
	for(i=0;i<(len1+len2);i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr1[100], arr2[100],i,len1,len2;
	printf("Enter length of first array : ");
	scanf("%d", &len1);
	//Input for 1st array
	printf("Enter %d values for array 1 : ", len1);
	for(i=0;i<len1;i++){
		scanf("%d", &arr1[i]);
	}
	printf("Enter length of array 2 : ");
	scanf("%d", &len2);
	//Input for 2nd array
	printf("Enter %d values for array 2 : ",len2);
	for(i=0;i<len2;i++){
		scanf("%d",&arr2[i]);
	}
	merge_sort(arr1,arr2,len1,len2);
}
