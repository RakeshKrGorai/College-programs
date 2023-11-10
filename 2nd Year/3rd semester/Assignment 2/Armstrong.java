//Write a program to display all Armstrong numbers between 1 to 10000.

import java.util.*;

class Armstrong{
	public static void main(String[] args){
		int num, copy, checker=0, digit;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number to check : ");
		num = sc.nextInt();
		copy= num;
		while(copy>0){
			digit = copy%10;
			checker += (digit*digit*digit);
			copy/=10;
		}
		if(checker == num){
			System.out.println(num +" is an armstrong number.");
		}
		else{
			System.out.println(num +" is not an armstrong number.");
		}
	}
}
