//WAP to print number of days of a month if a month no and year is given
#include<stdio.h>
int days(int n1, int n2);

int main(){
	int year, month;
	printf("Enter year and month : ");
    	scanf("%d %d", &year, &month);
	days(year, month);
	return 0;
}
int days(int year, int month){
	int days;
	if(month!=2){
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			days=31;
		}
		else{
			days=30;
		}
	}
	else{
		if(year%400==0){
			days=29;
		}
		else if(year%100==0){
			days=28;
		}
		else if(year%4==0){
			days=29;
		}
		else{
			days=28;
		}
	}
	printf("Days : %d \n", days);
}


