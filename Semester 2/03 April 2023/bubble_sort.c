#include<stdio.h>
int bubble(int arr[], int len){
	int i,j, temp;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//Print
	for(i=0;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[30],i, len;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d values : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	bubble(arr, len);
}

