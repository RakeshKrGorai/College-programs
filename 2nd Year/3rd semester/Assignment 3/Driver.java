//Write a program to Print the average of three numbers entered by user by creating a class named 'Average' having a method to calculate and print the average. Define another driver class to demonstrate the basic operation.

import java.util.*;

class Average{
	//Declaring data members for the class
	int num1, num2, num3;
	
	void inputValue(int num1, int num2, int num3){
		this.num1 = num1;
		this.num2 = num2;
		this.num3 = num3;
	}

	void printAvg(){
		int avg = (num1+num2+num3)/3;
		System.out.println("The average of the 3 numbers : "+ avg);
	}
}

//Driver Class
class Driver{
	public static void main(String args[]){
		int n1, n2, n3;
		Scanner sc = new Scanner(System.in);
		Average avg = new Average();
		System.out.print("Enter 3 numbers : ");
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		n3 = sc.nextInt();
		avg.inputValue(n1, n2, n3);
		avg.printAvg();
	}
}
