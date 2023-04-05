#include<stdio.h>
int delete(int arr[], int len, int element){
	int i,j,counter=0;
	for(i=0;i<len;i++){
		if(arr[i]==element){
			for(j=i;j<len;j++){
				arr[j]=arr[j+1];
			}
			printf("Element Found, deleting...\n");
			len--;

			for(i=0;i<len;i++){
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
		/*else{
			printf("Element not found\n");
		}*/
	}
}	



int main(){
	int i,arr[100],len, element;
	printf("Enter length of array : ");
	scanf("%d", &len);
	printf("Enter %d values : ", len);
	for(i=0;i<len;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter element to be deleted: ");
	scanf("%d", &element);
	delete(arr, len, element);
}

