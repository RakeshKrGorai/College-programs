#include<stdio.h>
#include<math.h>
int main(){
	int i,n,arr[100],j,x,min,i1,i2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	i1=n;
	i2=1;
	min=abs(arr[n-1]-arr[0]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			x=abs(arr[i]-arr[j]);
			if(x<min){
				i1=i+1;
				i2=j+1;
			}
			else{
				continue;
			}
		}
	}
	printf("%d %d",i1,i2);
}
