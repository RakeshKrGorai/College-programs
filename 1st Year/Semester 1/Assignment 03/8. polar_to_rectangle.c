//WAP to convert point in polar coordinate to rectangular coordinate
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float x, y, r, theta;
    printf("Enter Polar Co-ordinates(r, theta)\n");
    scanf("%f %f", &r, &theta);
    x = r * cos(theta);
    y = r * sin(theta);
    printf("Cartesian Co-ordinates (x, y) = (%.2f, %.2f)\n", x, y);
    return 0;
}
