//WAP to find string length without using library function
#include <stdio.h>
int main() {
	char s[] = "Hello World";
	int len=0;
	for (len; s[len] != '\0'; len++);
	printf("Length of the string: %d \n", len);
	return 0;
}
