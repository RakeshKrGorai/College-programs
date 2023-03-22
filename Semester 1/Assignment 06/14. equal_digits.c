//WAP to print numbers between 10 to 10000 where the digits of a number are equal(eg 11, 22,33 etc....)
#include<stdio.h>
int main(){
    int i=10, digit, currentDigit, counter=0;
    for(i;i<=10000;i++){
        int copy=i;
        digit=i%10;
        while (copy)
        {
            currentDigit=copy%10;
            copy=copy/10;
            if(digit!=currentDigit){
                counter++;
                break;
            }
        }
        if(counter==0){
            printf("%d ", i);
        }
        counter=0;
        
    }
    return 0; 
}