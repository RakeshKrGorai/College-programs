/*
 Design a class ‘Point’ with data members as xCo and yCo. The class should have a parameterized constructor to initialize its data members. Define a method distanceBetPoints() which returns the distance between two points.
 */

import java.util.*;
import java.io.*;

class Point{
	int xCo, yCo;
	double distance;
	Point(){
		distance = 0;
	}
	Point(int x, int y){
		xCo = x;
		yCo = y;
	}

	double distanceBetPoints(Point pt1, Point pt2){
		distance = Math.sqrt(Math.pow((pt1.xCo - pt2.xCo),2) + Math.pow((pt1.yCo - pt2.yCo),2));
		return distance;
	}

	void printDistance(){
		System.out.printf("Distance between the points : %.2d"+distance);
	}
}

class Driver{
	public static void main(String[] args){
		Point pt1 = new Point(4,5);
		Point pt2 = new Point(7,8);
		Point pt3 = new Point();
		pt3.distanceBetPoints(pt1, pt2);
		pt3.printDistance();
	}
}
