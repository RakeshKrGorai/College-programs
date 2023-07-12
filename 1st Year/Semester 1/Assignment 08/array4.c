#include<stdio.h>
int main(){
	int arr[9]={10,20,30,40,50,60,70,80,90}, i, min=arr[0], max=arr[0], avg=0, sum=0;
	for(i=0;i<9;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
		sum+=arr[i];
	}
	avg= sum/9.0;
	printf("Maximum value in array : %d \n", max);
	printf("Minimum value in array : %d \n", min);
	printf("Average value in array : %d \n", avg);
	return 0;
}
