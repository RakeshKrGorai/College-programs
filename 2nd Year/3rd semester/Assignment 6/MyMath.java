/*
 Create a sub-package called arithmetic under the package btech. The arithmetic package should contain a class MyMath having methods to deal with different arithmetic operations (addition, subtraction, multiplication, division and mod). Create a class Test containing the main method which will use the methods of sub-package arithmetic.
 */

package btech.Arithmetic;

public class MyMath{
	double num1, num2;

	public MyMath(double num1, double num2){
		this.num1 = num1;
		this.num2 = num2;
	}
	public double addition(){
		return (num1+num2);
	}
	public double subtraction(){
		return (num1-num2);
	}
	public double multiplication(){
		return (num1*num2);
	}
	public double division(){
		return (num1/num2);
	}
	public double mod(){
		return (num1%num2);
	}
} 
