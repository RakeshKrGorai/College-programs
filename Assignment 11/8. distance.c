//WAP to find distance between 2 points where distance is measured in terms of x and y coordinates. Values are given as 2 array one for x and another for y coordinates

#include<stdio.h>
#include<math.h>
int distance(int x[], int y[]);
int main()
{
    int x[]={2,4};
    int y[]={6,3};
    distance(x,y);
    return 0;
}
int distance(int x[], int y[]){
    int x_diff, y_diff;
    float dist;
    x_diff=x[1]-x[0];
    y_diff=y[1]-y[0];
    dist=sqrt(pow(x_diff, 2))+sqrt(pow(y_diff, 2));
    printf("Distance : %.2f \n", dist);
}
