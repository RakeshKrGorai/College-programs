#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum, i;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        sum+=pow(5,2*i);
    }
    printf("Result : %d", sum);
    return 0;
}
