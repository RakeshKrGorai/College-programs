//Write a program to find out the factorial of any inputted number.

import java.util.*;

class Factorial{
	public static void main(String[] args){
		int number, factorial=1;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number : ");
		number= sc.nextInt();
		while(number>0){
			factorial *= number%10;
			number--;
		}
		System.out.println("The factorial of the given number is  : "+ factorial);
	}
}
