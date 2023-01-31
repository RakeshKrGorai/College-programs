#include<stdio.h>
#include<math.h>
float power(int num, int pow1);
int main(){
        int num, pow1;
        printf("Enter your number and power : ");
        scanf("%d %d", &num, &pow1);
        printf("Result : %.2f \n", power(num, pow1));
        return 0;
}
float power(int num, int pow1){
        float result= pow(num, pow1);
        return result;
}
