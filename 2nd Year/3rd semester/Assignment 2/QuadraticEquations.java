//Write a program to calculate the roots of a quadratic equation.

import java.util.*;

class QuadraticEquation{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int x2, x1, c;
		System.out.print("Enter coefficients of x^2, x^1, and the constant : ");
		x2 = sc.nextInt();
		x1 = sc.nextInt();
		c = sc.nextInt();
		double root1 ,root2, discriminant;
		discriminant = (x1*x1)-4*x2*c;
		root1 = (-x2 + discriminant)/(2*x2);
		root2 = (-x2 - discriminant)/(2*x2);
		System.out.println("Roots for the given quadratic equations are : "+ root1 + " "+ root2);
	}
}
