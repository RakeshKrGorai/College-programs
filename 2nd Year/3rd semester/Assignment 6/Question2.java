/*
 Define an interface Calculator which has the basic methods add(), sub( ), mul() and div(). Define a concrete class named as DemoCalculator that implements the interface. Define the driver class, which create object reference of the interface Calculator and perform all basic operation of the calculator.
 */

import java.util.*;

interface Calculator{
	double add(double num1, double num2);
	double sub(double num1, double num2);
	double mul(double num1, double num2);
	double div(double num1, double num2);
}

class DemoCalculator implements Calculator{
	public double add(double num1, double num2){
		return (num1+num2);
	}
	public double sub(double num1, double num2){
		return (num1-num2);
	}
	public double mul(double num1, double num2){
		return (num1*num2);
	}
	public double div(double num1, double num2){
		if(num2!=0){
			return (num1/num2);
		}
		else{
			System.out.println("Can't divide by zero!");
			return -1;
		}
	}

}

class Main{
	public static void main(String[] args){
		Calculator calculator  = new DemoCalculator();
		double Add = calculator.add(20, 10);
    double Sub = calculator.sub(20, 10);
    double Mul = calculator.mul(20, 10);
    double Div = calculator.div(20, 10);
    System.out.println("Addition: " + Add);
    System.out.println("Subtraction: " + Sub);
    System.out.println("Multiplication: " + Mul);
    System.out.println("Division: " + Div);
	}
}
