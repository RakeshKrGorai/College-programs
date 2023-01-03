//Don't blindly copy the code, its incomplete!
#include<stdio.h>
int main(){
	int arr[9]={10,20,30,40,50,60,70,80,90}, i, min=0, max=0, avg=0, sum=0;
	for(i=0;i<8;i++){
		if(arr[i]>arr[i+1]){
			max=arr[i];
			min=arr[i+1];
		}
		else{
			max=arr[i+1];
                        min=arr[i];
		}
		sum+=arr[i];
	}
	avg= sum/9;
	printf("Maximum value in array : %d \n", max);
	printf("Minimum value in array : %d \n", min);
	printf("Average value in array : %d \n", avg);
	return 0;
}
