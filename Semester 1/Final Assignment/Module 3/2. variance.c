#include <stdio.h>
#include <math.h>

void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int  i, len=9;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
    for (i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }
    average = sum / (float)len;
    for (i = 0; i < len; i++)
    {
        sum1 = sum1 + pow((arr[i] - average), 2);
    }
    variance = sum1 / (float)len;
    std_deviation = sqrt(variance);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}