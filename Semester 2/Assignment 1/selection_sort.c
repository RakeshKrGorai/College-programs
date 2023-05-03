#include<stdio.h>
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
    for(i=0;i<len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[100],i,len;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d elements of array : ",len);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
    sort(arr,len);
}