//WAP to find string length without using library function
#include <stdio.h>
int main() {
	char s[] = "Hello World";
	int i, len=0;
	for (i = 0; s[i] != '\0'; i++){
		len++;
	}
	printf("Length of the string: %d \n", len);
	return 0;
}
