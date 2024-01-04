import btech.Arithmetic.MyMath;
import java.util.*;

class Test{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter two numbers : ");
		double num1 = sc.nextDouble();
		double num2 = sc.nextDouble();
		MyMath data = new MyMath(num1, num2);
		System.out.println("Sum : "+ data.addition());
		System.out.println("Difference : "+ data.subtraction());
		System.out.println("Product : "+ data.multiplication());
		System.out.println("Division :"+ data.division());
		System.out.println("Modulus : "+ data.mod());
	}
}
