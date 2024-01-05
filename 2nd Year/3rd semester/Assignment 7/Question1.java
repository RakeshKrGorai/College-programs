/* Write an exception handling java program to read two numbers n1, n2 and calculate and print the result of n1/n2. If n2 is Zero (0) then it will be handled by exception handler and again ask the value of n2. In the exception handler the program should display appropriate message to the user.*/

import java.util.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int res;
		System.out.print("Enter 2 numbers : ");
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		/*if(num2==0){
			throw new ArithmeticException("Can't Divide by zero");
		}
		else{
			System.out.println("Result : "+ num1/num2);
		}
		*/
		try{
			res = num1/num2;
			System.out.println("Result : "+ res);
		}
		catch(ArithmeticException e){
			System.out.println("Division with zero not possible");
			num2 = sc.nextInt();
			System.out.println("Result : "+ num1/num2);
		}
	}
}
