#include<stdio.h>
int reverse(int arr[], int len){
	int index, temp;
	for(index=0;index<len/2;index++){
		temp=arr[index];
		arr[index]=arr[len-index-1];
		arr[len-index-1]=temp;
	}
	for(index=0;index<len;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
}
int main(){
	int arr[]={10,23,4,5,45,6,8,9,89,78};
	int len=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,len);
}
