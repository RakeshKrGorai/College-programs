//WAP to find volume of sphere
#include<stdio.h>
int main(){
	int radius;
	float volume;
	printf("Enter radius of the sphere : ");
	scanf("%d",&radius);
	volume=(float) (4.0/3)*3.14*radius*radius*radius;
	printf("The volume of sphere is %.2f \n", volume);
	return 0;
}
