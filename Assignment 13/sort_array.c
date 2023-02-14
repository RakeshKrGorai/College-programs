//Write user defined function to sort an array of integer with pointer as an argument
#include<stdio.h>
int sortArray(int len, int *ptr);
int main(){
	int arr[]={1,0,6,3,2,4,9,8,7,5};
	int len= sizeof(arr)/sizeof(arr[0]);
	sortArray(len, arr);
	return 0;
}
int sortArray(int len, int *ptr){
	int i, j, temp;
	for(i=0;i<len;i++){
                for(j=i+1;j<len;j++){
			if (*(ptr+j)<*(ptr+i)){
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<len;i++){
		printf("%d ", *(ptr+i));
	}
	printf("\n");
}
