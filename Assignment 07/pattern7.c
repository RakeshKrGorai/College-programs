#include<stdio.h>
int main()
{
    int a=1, i, j;
    for(i=0;i<5;i++){
        if(i%2==0){
            for(j=0;j<10-i;j++){
                if(j>=i && j%2==0){
                    printf("%d ", a);
                    if(a==1){
                        a=0;
                    }
                    else{
                        a=1;
                    }
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(j=0;j<10-i;j++){
                if(j>=i && j%2!=0){
                    printf("%d ",a);
                    if(a==1){
                        a=0;
                    }
                    else{
                        a=1;
                    }
                }
                else{
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }   
    return 0;
}
