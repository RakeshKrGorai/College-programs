//WAP to create table for f(x)=5x3, where x=[1,2,3,4,5,6] and find derivative of f(x) wrt x at specified value using functions
#include<stdio.h>
#include<math.h>
int derivative(int arr[]);
int main(){
	int arr[]={1,2,3,4,5,6};
	derivative(arr);
	return 0;
}
int derivative(int arr[]){
	int i, fx, der;
	printf("f(x) \t Derivative\n");
	for(i=1;i<7;i++){
		fx=5*pow(i,3);
		der=15*pow(i,2);
		printf("%d \t %d \n", fx, der);
	}
}
