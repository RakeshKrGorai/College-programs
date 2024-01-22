/*Write a java program to read two numbers x and y and calculate x/(x-y). The program should check the value of x-y. Before dividing with x, it should throw an exception if x-y is zero. In the exception handler the program should display appropriate message to the user.*/
import java.util.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int res;
		System.out.print("Enter 2 numbers : ");
		int x = sc.nextInt();
		int y = sc.nextInt();
		if((x-y)==0){
			throw new ArithmeticException("Both numbers cannot be same.");
		}
		else{
			System.out.println("Result : "+ x/(x-y));
		}
	}
}
