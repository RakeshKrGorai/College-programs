#include<stdio.h>
#include<math.h>
float equation(int n, int x);
int factorial(int i);
int main(){
        int n, x;
        printf("Enter value of n & x : ");
        scanf("%d %d", &n, &x);
        equation(n, x);
        return 0;
}

int factorial(int num){
    if(num!=1){
        int i=1, fact=1;
        for(i;i<=num;i++){
            fact*=i;
        }
        return fact;
    }
    else{
        return 1;
    }
}

float equation(int n, int x){
        float result=1.0;
        int i;
        for(i=0;i<n;i++){
                result+=(pow(x,(i+1))/factorial(i+1));
        }
        //return result;
        printf("Result : %.2f \n", result);
}

