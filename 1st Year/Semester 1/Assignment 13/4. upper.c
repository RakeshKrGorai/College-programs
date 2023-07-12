//WAP to convert a given string into upper case string if it is in lower case using user defined function having pointer argument
#include<stdio.h>
char upper(int len, char str[], char *p);
void main(){
	char str[]={"HelloWorldProgrammingIsFun"};
	int len=sizeof(str)/sizeof(str[0]);
	char *p;
	upper(len, str, p);
}
char upper(int len, char str[], char *p){
	int i=0;
	for(i;i<len;i++){
		p=&str[i];
		if((int)*p>=97 && (int)*p<=122){
			*p=*p-32;
		}
	}
	for(i=0;i<len;i++){
		p=&str[i];
		printf("%c", *p);
	}
	printf("\n");
}

