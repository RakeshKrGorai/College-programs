//Write a program to check whether an inputted number is positive or negative.

import java.util.*;

class SignedNumbers{
	public static void main(String[] args){
		int number;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number to check : ");
		number = sc.nextInt();
		if(number>0){
			System.out.println(number +" is a positive number.");
		}
		else{
			System.out.println(number +" is a negative number.");
		}
	}
}
