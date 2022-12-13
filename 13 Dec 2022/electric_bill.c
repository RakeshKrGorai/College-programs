//WAP to calculate electric bill by inputing previous and present meter reading
#include<stdio.h>
int main(){
        int previousReading, presentReading, points;
       	float price;
        printf("Enter previous reading : ");
	scanf("%d", &previousReading);
	printf("Enter present reading : ");
        scanf("%d", &presentReading);
	points = presentReading - previousReading;
	if (points>200){
		price = 100*1.40 + 100*2.50+(points-200)*3.20;
	}
	else if(points>100){
		price = 100*1.40+(points-100)*2.50;
	}
	else{
		price = points*1.40;
	}
	printf("Electric Bill for the given units is %.2f \n", price);
	return 0;

}
