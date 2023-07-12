//WAP to convert fahrenheit to celsius
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int fahrenheit;
    float celsius;
    printf("Enter temperature in fahrenheit : ");
    scanf("%d", &fahrenheit);
    celsius=(float)(fahrenheit-32)*5/9;
    printf("The temperature in celsius is %.2f", celsius);
    return 0;
}
