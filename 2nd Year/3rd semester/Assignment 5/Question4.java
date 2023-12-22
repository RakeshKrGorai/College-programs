/*
 Create a derived class Circle inherited from the Point2D (created in the previous question) with the data member radius and method area() that returns the area of circle. Create a subclass called Cylinder which is derived from the superclass Circle having data member height and volume() that computes the volume of cylinder. Use constructor to initialize the instance variables. Test the methods of Circle and Cylinder classes by creating objects in the main method of another class.
 */

import java.util.*;

class Point2D{
	int x, y;
	Point2D(){
		x=0;
		y=0;
	}
	Point2D(int x, int y){
		this.x = x;
		this.y = y;
	}

	void display(){
		System.out.println("X : "+x+"\nY : "+y);
	}
}

class Circle extends Point2D{

	double radius;
	Circle(double radius){
		this.radius = radius;
	}
	double area(){
		return (3.14*radius*radius);
	}
}

class Cylinder extends Circle{
	double height;
	Cylinder(double radius, double height){
		super(radius);
		this.height = height;
	}

	double getVolume(){
		return (0.33*3.14*radius*radius*h);
	}
}

class Point3D extends Point2D{
	int z;
	Point3D(){
		x=0;
		y=0;
		z=0;
	}
	Point3D(int x, int y, int z){
		this.x = x;
		this.y = y;
		this.z = z;
	}
	void show(){
		System.out.println("Z : "+z);
	}
}

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter radius : ");
		double radius = sc.nextDouble();
		System.out.println("Enter height for cylinder : ");
		double height = sc.nextDouble();
		Cylinder c = new Cylinder(radius, height);
		System.out.println("Area : "+c.area());
		System.out.println("Volume of the cylinder : "+c.getVolume());

	}
}
