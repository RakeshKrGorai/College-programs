//WAP to print perfect numbers upto given range
#include<stdio.h>
int main(){
    int sum=0, fRange;
    printf("Enter final range : ");
    scanf("%d", &fRange);
    for(int i=1;i<=fRange;i++){
        for(int j=1;j<i;j++){
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