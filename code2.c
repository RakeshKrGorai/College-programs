//https://codeforces.com/problemset/problem/376/A
#include<stdio.h>
int main(){
	char s[1000000];
	scanf("%s",s);
	int i,l=0,r=0,k=1,pos=0;
	for(pos;s[pos]!='^';pos++);
	for(i=0;s[i]!='^';i++){
		if((int)s[i]>48 &&(int) s[i]<=57){
			l+=((s[i]-48)*(pos-i));
		}
	}
	i++;
	for(i;s[i]!='\0';i++){
		if((int)s[i]>48 && (int)s[i]<=57){
			r+=((s[i]-48)*(k++));
		}
		else{
			k++;
		}
	}
	if(l==r){
		printf("balance");
	}
	else if (l>r){
		printf("left");
	}
	else if(l<r){
		printf("right");
	}
}
		
		
