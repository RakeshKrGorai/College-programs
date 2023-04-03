#include<stdio.h>
int copy(int array1[], int len, int array2[]){
	int index;
	//Copying
	for(index=0;index<len; index++){
		array2[index]=array1[index];
	}
	//Print
	printf("Copied Array : \n");
	for(index=0;index<len;index++){
		printf("%d ", array1[index]);
	}
	printf("\n");
}
int main(){
	int index, array1[100], len, array2[100];
	printf("Enter length of array : ");
	scanf("%d", &len);
	//Taking Input
	printf("Enter %d values : ", len);
	for(index=0;index<len;index++){
		scanf("%d", &array1[index]);
	}
	copy(array1, len, array2);
}


