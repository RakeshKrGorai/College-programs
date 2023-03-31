//WAP to compute binary addition
#include<stdio.h>
int main(){
	int n1, n2;
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	int arr1[]={0}, arr2[]={0}, arr3[0]={0};
	int i=0, j;
	while(n1){
		arr1[i++]=n1%2;
		n1/=2;
	}
	while(n2){
		arr2[i++]=n2%2;
		n2/=2;
	}

