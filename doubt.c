#include<stdio.h>
int main()
{
    int ch=65;
    printf("%c \n",ch);
	for(int i=1;i<6;i++){
		for(int j=0;j<i;j++){
			printf("%c ", ch+j);
		}
		printf("\n");
	}
	return 0;
}
