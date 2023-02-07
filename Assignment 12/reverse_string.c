//WAP to print a string in reverse order without using library function
#include<stdio.h>
char reverse_string(char str[]);
int main(){
	char str[]="Hello World";
	reverse_string(str);
	return 0;
}
char reverse_string(char str[]){
	int i, len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	for(i=len;i>=0;i--){
		printf("%c ", str[i]);
	}
	printf("\n");
}
