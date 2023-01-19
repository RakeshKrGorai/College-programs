#include<stdio.h>
int main(){
	int arr[20]={10,20,30,40,50,60,70,80,100,90}, i;
	int pos,val;
	printf("Enter value to be inserted : ");
	scanf("%d", &val);
	printf("Enter position (0-10) : ");
	scanf("%d", &pos);
	arr[pos]=val;
	printf("%d has been placed at %d position \n", val, pos);
	printf("Updated Array :");
	for(i=0;i<10;i++){
		printf("%d \n", arr[i]);
	}
	return 0;

}
