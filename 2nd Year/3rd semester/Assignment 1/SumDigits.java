//Write a program to find out the sum of the individual digits of any four-digit integer number.

import java.util.*;

class SumDigits{
	public static void main(String[] args){
		int number, sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a 4 digit number : ");
		number = sc.nextInt();
		while(number!=0){
			sum+=(number%10);
			number/=10;
		}
		System.out.println("Sum of digits : "+sum);
	}
}
