#include<stdio.h>
int main()
{
    int ch=1, i, j, k, a;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d", ch++);
        }
        ch--;
        for(a=1;a<i;a++){
            printf("%d",--ch);
        }
        printf("\n");
        ch=1;

    }
    return 0;
}
