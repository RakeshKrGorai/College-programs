#include<stdio.h>
int main(){
	int m,n,steps=0,c,cnt=0;
	scanf("%d" "%d",&m,&n);
	c=m;
	while(c>0){
		if(c==1){
			steps++;
			c--;
		}
		else{
			steps++;
			c=c-2;
		}
	}
	while(steps<m){
		if(steps%n==0){
			printf("%d",steps);
			cnt++;
			break;
		}
		else{
			steps++;
		}
	}
	if(cnt==0){
		printf("-1");
	}
	//printf("%d",steps);
}
