//WAP to check sides of triangle being valid or not, and further check type of triangle
#include<stdio.h>
int main(){
	int side1, side2, side3;
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d", &side1, &side2, &side3);
	int sq1 = side1*side1;
	int sq2 = side2*side2;
	int sq3 = side3*side3;
	if (side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
		printf("It is a valid triangle \n");
		if (side1==side2 && side2==side3){
			printf("It is an equilateral triangle");
		}
		else if(side1==side2||side2==side3||side3==side1){
			printf("It is an isosceles triangle \n");
		}
		else if (sq1+sq2==sq3 || sq2+sq3==sq3 || sq3+sq1==sq2)
		{
			printf("It is a right angled triangle");
		}
		else{
			printf("It is a scalene triangle");
		}
	}
	else{
		printf("It is an invalid triangle \n");
	}
	return 0;
}
