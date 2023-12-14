/*
 Design a class ‘Time’ having data members as hour, minute and second. The class should have a parameterized constructor to initialize its data members. It should also have methods displayTime() to display the time in HH:MM:SS format and addTime() to add two times. Test these methods by creating a main method in another class.
*/

import java.util.*;

class Time{
	int hour, minute, second;

	Time(int h, int m, int s){
		hour = h;
		minute = m;
		second = s;
	}

	Time(){
		hour = 0;
		minute = 0;
		second = 0;
	}

	void addTime(Time t1, Time t2){
		second = t1.second+t2.second;
		while(second>60){
				minute++;
				second-=60;
		}
		minute += t1.minute+t2.minute;
		while(minute>60){
			hour++;
			minute-=60;
		}
		hour+= t1.hour+t2.hour;
	}

	void displayTime(){
			System.out.println(hour+":"+minute+":"+second);
	}
}

class Driver{
	public static void main(String[] args){
		Time time1 = new Time(12,25,50);
		System.out.print("Time 1 : ");
		time1.displayTime();
		Time time2 = new Time(12,49,59);
		System.out.print("Time 2 : ");
		time2.displayTime();
		Time time3 = new Time();
		time3.addTime(time1, time2);
		System.out.print("Total time : ");
		time3.displayTime();
	}
}
