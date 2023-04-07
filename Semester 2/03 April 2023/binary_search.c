#include<stdio.h>
int binary(int arr[100], int element, int len){
	int i,last=len-1,first=0,mid;
	while(first<=last){
		mid=(first+last)/2;
		if(element>arr[mid]){
			first=mid+1;
		}
		else if(element<arr[mid]){
			last=mid-1;
		}
		else if(element==arr[mid]){
			return mid;
		}
	}
	return -1;
}
int sort(int arr[100], int len){
	int i,j,temp;
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int arr[100],element,i,len,x;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d elements of array : ",len);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched : ");
	scanf("%d",&element);
	sort(arr,len);
	x=binary(arr,element,len);
	if(x==-1){
		printf("Element not found\n");
	}
	else{
		printf("Element found\n");
	}
}
