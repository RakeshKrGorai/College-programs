#include<stdio.h>
int main()
{
    int i, j, counter=1;
    for(i=0;i<5;i++){
        if(i%2==0){
            for(j=0;j<10-i;j++){
                if(j>=i && j%2==0){
                    printf("%d ", counter);
                }
                else{
                    printf(" ");
                }
            }
            counter++;
        }
        else{
            for(j=0;j<10-i;j++){
                if(j>=i && j%2!=0){
                    printf("%d ", counter);
                }
                else{
                    printf(" ");
                }
            }
            counter++;
        }
        
        printf("\n");
    }
    return 0;
}