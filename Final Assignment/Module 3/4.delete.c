#include<stdio.h>
int main(){
	int pos, i, j;
	int a[]={1,2,3,4,5};
	int n= sizeof(a)/sizeof(a[0]);
	printf("Enter element to delete : ");
    scanf("%d", &pos);
    printf("Element at %d position is deleted. \n", pos);
    printf("Updated Array : \n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            
            a[i]=a[i+1];
        }
        
    }
    n--;
    for(i=0;i<n;i++){
	    printf("%d ", a[i]);
    }
	printf("\n");
	return 0;
}