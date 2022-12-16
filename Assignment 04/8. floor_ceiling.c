//WAP to round a given floating point number to integer by considering the floor & ceiling operation, without using built in function
#include<stdio.h>
int main(){
        float x, ceil, floor;
        printf("Enter a number : ");
        scanf("%f", &x);
        if (x-(int)x>0){
                ceil= (int)x+1;
                floor = (int)x;
        }
        else{
                ceil = (int)x;
                floor = (int)x;
        }
        printf("floor : %.2f\n", floor);
        printf("ceil : %.2f\n", ceil);
        return 0;
}
