#include<stdio.h>
int main()
{
    int ch='A';
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",ch);
		}
		printf("\n");
		ch++;
	}
	return 0;
}
