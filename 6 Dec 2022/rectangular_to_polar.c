//WAP to convert point in rectangular coordinate system to polar coordinate system
#include<stdio.h>
#include<math.h>
int main(){
	float x, y, x_coord, y_coord;
	printf("Enter x and y coordinate : ");
	scanf("%f %f", &x, &y);
	x_coord= sqrt((x*x) + (y*y));
	y_coord = atan(y/x);
	printf("polar coordinates : %.2f ,%.2f \n", x_coord, y_coord);
	return 0;
}
