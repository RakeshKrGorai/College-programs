//Write a program to print the area of a rectangle by creating a class named 'Area' having two methods. First method named as 'setDim ()' takes length and breadth of rectangle as parameters and the second method named as 'getArea ()' returns the area of the rectangle. Length and breadth of rectangle are entered through keyboard. 

import java.util.*;

class Area {
    int length, breadth;
    void setDim() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of the rectangle: ");
        length = sc.nextInt();
        System.out.print("Enter breadth of the rectangle: ");
        breadth = sc.nextInt();
    }

    int getArea() {
        return length * breadth;
    }
}

class Driver {
    public static void main(String[] args) {
        Area rectangle = new Area();
        rectangle.setDim();
        int area = rectangle.getArea();
        System.out.println("Area of the rectangle: " + area);
    }
}

