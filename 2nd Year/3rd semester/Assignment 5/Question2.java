/*
 Create a class Point2D with the data member x and y coordinate and methods getCoord() that sets the coordinate value and display() to show the coordinates. Create a subclass called Point3D which is derived from the superclass Point2D with data members z coordinate and has methods getInput() to initialize the input and show() method to display the coordinates. Test the methods of both the classes by creating objects in the main method of driver class.
 */

import java.util.*;

class Point2D{
	int x, y;
	
	void getCoord(int x, int y){
		this.x = x;
		this.y = y;
	}

	void display(){
		System.out.println("X : "+x+"\nY : "+y);
	}
}

class Point3D extends Point2D{
	int z;

	void getInput(int x, int y, int z){
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
		Point3D point = new Point3D();
		System.out.print("Enter x, y & z coordinates : ");
		int x = sc.nextInt();
		int y = sc.nextInt();
		int z = sc.nextInt();
		point.getInput(x,y,z);
		point.display();
		point.show();
	}
}
