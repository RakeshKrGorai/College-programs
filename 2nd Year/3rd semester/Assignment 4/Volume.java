/*
 Define a class ‘Box’ that uses a parameterized constructor to initialize the dimensions of a box. The dimensions of the Box are width, height, depth. The class should have a method that can return the volume of the box. Create an object of the Box class and test the functionalities
 */

import java.util.*;

class Box{

	double width, depth, height;

	Box(double width, double depth, double height){
		this.width = width;
		this.depth = depth;
		this.height = height;
	}
	double getVolume(){
		return (width*depth*height);
	}

}

class Driver{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter width, depth & height of the box :  ");
		double width = sc.nextDouble();
		double depth = sc.nextDouble();
		double height = sc.nextDouble();
		Box box = new Box(width, depth, height);
		System.out.println("Volume of the box for the given dimension is  : "+box.getVolume());
	}
}
