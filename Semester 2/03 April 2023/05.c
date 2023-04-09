#include<stdio.h>

void input(int arr[], int len){
	int index;
	printf("Enter marks of %d students : ", len);
	for(index=0; index<len;index++){
		scanf("%d", &arr[index]);
	}
}

void display(int arr[], int len){
	int index=0;
	for(index=0;index<len;index++){
		printf("%d ", arr[index]);
	}
	printf("\n");
}

int class_max(int arr[], int len){
    int index=0,max=arr[0];
	for(index=0;index<len;index++){
		if(arr[index]>max){
			max=arr[index];
		}
	}
	printf("%d ",max);
}

int class_min(int arr[],int len){
    int index=0,min=arr[0];
	for(index=0;index<len;index++){
		if(arr[index]>min){
			min=arr[index];
		}
	}
	printf("%d ",min);
}

int class_sum(int arr[],int len){
    int index=0,sum=0;
	for(index=0;index<len;index++){
		sum+=arr[index];
	}
	printf("%d",sum);
}

int class_avg(int arr[],int len){
    int index=0;
	float avg=0;
	for(index=0;index<len;index++){
		avg+=arr[index];
	}
	avg/=(float)len;
	printf("%.2f",avg);
}

void main(){
    int arr[10],len=10;
    input(arr,len);
}