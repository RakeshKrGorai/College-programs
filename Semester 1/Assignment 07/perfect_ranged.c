//WAP to print perfect numbers upto given range
#include<stdio.h>
int main(){
    int sum=0, fRange, i, j;
    printf("Enter final range : ");
    scanf("%d", &fRange);
    for(i=1;i<=fRange;i++){
        for(j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d \n", i);
        }
        sum=0;
    }
    return 0;
}