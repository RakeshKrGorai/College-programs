//3. Write a program to input two floating point numbers through the keyboard and display their sum.

//Importing java.util
import java.util.*;

class SumInput{
	
	public static void main(String[] args){
		float num1=0, num2=0, result=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter 2 numbers : ");
		num1= sc.nextFloat();
		num2= sc.nextFloat();
		result = num1+num2;
		System.out.println("Sum : "+result);
	}
}