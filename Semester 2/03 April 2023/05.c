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
	printf("Maximum Marks : %d ",max);
	printf("\n");
}

int class_min(int arr[],int len){
    int index=0,min=arr[0];
	for(index=0;index<len;index++){
		if(arr[index]<min){
			min=arr[index];
		}
	}
	printf("Minimum Marks : %d ",min);
	printf("\n");
}

int class_sum(int arr[],int len){
    int index=0,sum=0;
	for(index=0;index<len;index++){
		sum+=arr[index];
	}
	printf("Sum : %d",sum);
	printf("\n");
}

int class_avg(int arr[],int len){
    int index=0;
	float avg=0;
	for(index=0;index<len;index++){
		avg+=arr[index];
	}
	avg/=(float)len;
	printf("Average : %.2f",avg);
	printf("\n");
}

void main(){
    int arr[10],len=10;
    input(arr,len);
    display(arr,len);
    class_max(arr,len);
	class_min(arr,len);
    class_sum(arr,len);
    class_avg(arr,len);
}