//Write a program to input the radius value of a circle through the keyboard and then display the area of the circle.

//import package
import java.util.*;

class AreaCircle{
	public static void main(String[] args){
		double radius, area;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter radius of circle : ");
		radius = sc.nextDouble();
		area= 3.14*radius*radius;
		System.out.println("Area of circle : "+area);
	}
}
