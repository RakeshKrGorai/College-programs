#include <stdio.h>
#include<math.h>
typedef struct distance {
    float x, y;
} distance;

int main()
{
    distance start, end;
    float x_diff, y_diff;
    printf("Enter x-y coordinates for point 1 : ");
    scanf("%f %f", &start.x, &start.y);
    printf("Enter x-y coordinates for point 2 : ");
    scanf("%f %f", &end.x, &end.y);
    float dist;
    x_diff=end.x-start.x;
    y_diff=end.y-start.y;
    x_diff=pow(x_diff, 2);
    y_diff=pow(y_diff, 2);
    int sum=x_diff+y_diff;
    dist=sqrt(sum);
    printf("Distance : %.2f \n", dist);
    return 0;
}
