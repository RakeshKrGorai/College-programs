//Write a program to check whether an inputted number is palindrome or not.

import java.util.*;

class CheckPallindrome{
	public static void main(String[] args){
		int num, invert=0, copy, digit;
		System.out.print("Enter a number : ");
		Scanner sc= new Scanner(System.in);
		num = sc.nextInt();
		copy = num;
		while(copy>0){
			digit = copy%10;
			invert = (invert * 10) + digit;
			copy/=10;
		}
		if(num==invert){
			System.out.println(num + " is a pallindrome number.");
		}
		else{
			System.out.println(num +" is not a pallindrome number.");
		}
	}
}
