/*
Update the Q2 with default and parameterised constructor. Make changes as necessary. Test the functionalities of above methods in the driver class.
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
		System.out.print("Enter x, y & z coordinates : ");
		int x = sc.nextInt();
		int y = sc.nextInt();
		int z = sc.nextInt();
		Point3D point = new Point3D(x,y,z);
		point.display();
		point.show();
	}
}
