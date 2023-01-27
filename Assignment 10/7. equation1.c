#include<stdio.h>
float equation(int n);
int factorial(int i);
int main(){
        int n;
        printf("Enter value of n : ");
        scanf("%d", &n);
        equation(n);
        return 0;
}

int factorial(int i){
        if(i==1){
            
            return 1;
        }
        else{
            return i*factorial(i-1);
        }
}

float equation(int n){
        float result=1.0;
        int i;
        for(i=1;i<n;i++){
                result+=(float)(1.0/factorial(i+1));
        }
        //return result;
        printf("Result : %f \n", result);
}

