//Sort while merging
#include<stdio.h>
int merge_sort(int arr1[100],int arr2[100], int len1, int len2){
	int arr[100],i,j,len,counter=0;
	for(i=0;i<len1;i++){
		for(j=0;j<len2;j++){
			//So what i basically need to do is create two separate loops and find smallest numbers in 
			lbl:
			if(arr1[i]>arr2[j]){
				arr[counter++]=arr2[j];

			}
			else if(arr1[i]<arr2[j]){
				arr[counter++]=arr1[i];
				i++;
				goto lbl;
			}
		}
	}
	//Printing I Dont Know what array
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
