//WAP to print string in reverse order using user defined function having pointer as argument
#include<stdio.h>
int reversePrint(int len, char str[],char *p);
int main(){
	char str[]={"HelloWorld"};
	int len = sizeof(str)/sizeof(str[0]);
	char *p;
	reversePrint(len, str, p);
	return 0;
}
int reversePrint(int len, char str[], char *p){
	int i;
	for(i=len;i>=0;i--){
		p=&(str[i]);
		printf("%c", *p);
	}
	printf("\n");
}
