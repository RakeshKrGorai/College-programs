//Write a program to input the principal amount, rate of interest, and the time period through the keyboard and find out the simple interest.

import java.util.*;

class SimpleInterest{
	public static void main(String[] args){
		double principal, rate, time, simpleInterest;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Principal Amount : ");
		principal = sc.nextDouble();
		System.out.print("Enter Rate of Interest : ");
		rate = sc.nextDouble();
		System.out.print("Enter Time : ");
		time = sc.nextDouble();
		simpleInterest = (principal*rate*time)/100;
		System.out.println("Simple Interest : "+simpleInterest);
	}
}
		