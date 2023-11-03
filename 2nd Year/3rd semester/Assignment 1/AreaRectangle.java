//Write a program to find out the area of any rectangle.

import java.util.*;

class AreaRectangle{
	public static void main(String[] args){
		double length, breadth, area;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter length & breadth : ");
		length = sc.nextDouble();
		breadth= sc.nextDouble();
		area = length * breadth;
		System.out.println("Area of Rectangle : "+area);
	}
}