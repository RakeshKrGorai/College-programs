#include<stdio.h>
int main(){
	int pos, i, j;
	int a[]={1,2,4,2,5};
	int n= sizeof(a)/sizeof(a[0]);
	printf("Enter element to delete : ");
    scanf("%d", &pos);
    for(i=0;i<n-1;i++){
        if(a[i]==pos){
            for(j=i+1;j<n;j++){
                a[j-1]=a[j];
            }
            n--;
        }

        
    }
    printf("Updated Array : \n");
    for(i=0;i<n;i++){
	    printf("%d ", a[i]);
    }
    printf("\n");
	return 0;
}