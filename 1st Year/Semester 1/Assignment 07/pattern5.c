#include<stdio.h>
int main()
{
    int ch=65, i, j, k, a;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c", ch++);
        }
        ch--;
        for(a=1;a<i;a++){
            printf("%c",--ch);
        }
        printf("\n");
        ch=65;

    }
    return 0;
}
