//WAP to concatenate two strings and store into another string
#include<stdio.h>
int main(){
	char str1[]="Hello World";
	char str2[]="Programming is Fun";
	char str3[50];
	int i, counter=0;
	for(i=0;str1[i]!='\0';i++){
		str3[i]=str1[i];
		counter++;
	}
	for(i=0;str2[i]!='\0';i++){
		str3[counter]=str2[i];
		counter++;
	}
	str3[counter]='\0';
	printf("%s", str3);
	printf("\n");
	return 0;
}
