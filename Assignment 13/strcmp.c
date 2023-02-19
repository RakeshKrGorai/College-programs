//WAP to compare 2 strings without using library func
#include<stdio.h>
char stcmp(int len, char str1[], char str2[], char *p1, char *p2);
void main(){
	int len1, len2;
	char str1[]={"Hello"};
	char str2[]={"Hello"};
	char *p1, *p2;
	len1=sizeof(str1)/sizeof(str1[0]);
	len2=sizeof(str2)/sizeof(str2[0]);
	if(len1!=len2){
		printf("Not same \n");
	}
	else{
		stcmp(len1, str1, str2, p1, p2);
	}
}
char stcmp(int len, char str1[], char str2[], char *p1, char *p2){
	int i, cnt=0;
	for(i=0;i<len;i++){
		p1=&str1[i];
		p2=&str2[i];
		if(*p1!=*p2){
			cnt++;
			printf("Not same \n");
			break;
		}
		else{
			continue;
		}
	}
	if(cnt==0){
		printf("Same String \n");
	}
}
