#include<stdio.h>
int main(){
	int arr[20]={0};
	int pos,val;
	printf("Enter value to be inserted : ");
	scanf("%d", &val);
	printf("Enter position (0-20) : ");
	scanf("%d", &pos);
	arr[pos]=val;
	printf("%d has been placed at %d position \n", val, pos);
	return 0;
}
