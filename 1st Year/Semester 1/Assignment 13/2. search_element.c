//Write user defined function to search an element an element in an integer array with pointer as argument
#include<stdio.h>
int searchElement(int len, int element, int *ptr);
int main(){
	int arr[]={1,0,6,3,2,4,9,8,7,5};
        int len= sizeof(arr)/sizeof(arr[0]);
	int element;
	printf("Enter element to be searched : ");
	scanf("%d", &element);
	searchElement(len, element, arr);
	return 0;
}
int searchElement(int len, int element, int *ptr){
	int i, cnt=0;
	for(i=0;i<len;i++){
		if(*(ptr+i)==element){
			cnt++;
		}
		else{
			continue;
		}
	}
	if(cnt==0){
		printf("Element not found \n");
	}
	else{
		printf("Element found \n");
	}
}
