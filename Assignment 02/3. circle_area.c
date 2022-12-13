//WAP to find area of circle
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int radius;
    float area;
    printf("Enter radius : ");
    scanf("%d", &radius);
    area= 3.14*radius*radius;
    printf("Area of circle is %.2f \n", area);
    return 0;
}
