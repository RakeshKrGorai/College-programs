//Write a program to input the time value in seconds and then display it in the hour: minute: second format
//using the modulus operator (%). For example, INPUT:  Enter the time in second: 3610

import java.util.*;

class TimeConvert{
	public static void main(String[] args){
		int seconds, minute, hour;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter time in seconds : ");
		seconds = sc.nextInt();
		hour = seconds/3600;
		seconds=seconds-(hour*3600);
		minute= seconds/60;
		System.out.println(hour+"hours"+minute+"minutes");
	}
}