#include<stdio.h>
int main(){
	int arr[20]={10,25,30,78,45,69,12,103};
	int num1, num2, element,i, cnt;
	printf("Enter element to be searched : ");
	scanf("%d", &num1);
	printf("Enter new element : ");
        scanf("%d", &num2);
	int len= sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		if(arr[i]==num1){
			arr[i]=num2;
			cnt++;
			printf("The array has been updated \n");
		}
	}
	if(cnt==0){
		printf("Element not found \n");
	}
	/*for(int i=0;i<num;i++){
		printf("%d \n", arr[i]);
	}*/
	return 0;
}
