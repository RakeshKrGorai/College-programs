//Write a program to find out the largest between two numbers using a conditional operator.


import java.util.*;

class GreaterNumber{
	public static void main(String[] args){
		int num1, num2;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter two numbers to check : ");
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		if(num1>num2){
			System.out.println(num1 +" is greater than "+ num2);
		}
		else{
			System.out.println(num2 +" is greater than "+ num1);
		}
	}
}

