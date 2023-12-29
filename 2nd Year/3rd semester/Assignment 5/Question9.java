/*
Create a class Figure with instance members dim1 and dim2. Use constructor and area() that returns the area of figure. Create a derived class Rectangle derived from Figure and area() that returns the area of rectangle. Create another derived class Triangle and Square that has area() which returns area of Triangle and Square respectively. Derived class have appropriate constructor. Using method overriding concept test the functionalities of derived class by creating objects and super class memory references in Driver class.
 */


class Figure {
    double dim1;
		double dim2;
    
		public Figure(double dim1, double dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }

    double area() {
        System.out.println("Area method of Figure class");
        return 0;
    }
}

class Rectangle extends Figure {
    Rectangle(double length, double width) {
        super(length, width);
    }

   double area() {
        System.out.println("Area method of Rectangle class");
        return (dim1 * dim2);
    }
}

class Triangle extends Figure {
    Triangle(double base, double height) {
        super(base, height);
    }

    double area() {
        System.out.println("Area method of Triangle class");
        return (0.5 * dim1 * dim2);
    }
}

class Square extends Figure {
    Square(double side) {
        super(side, side);
    }

   double area() {
        System.out.println("Area method of Square class");
        return dim1 * dim2;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5, 10);
        Triangle triangle = new Triangle(4, 6);
        Square square = new Square(7);

        // Testing the functionalities of derived classes
        System.out.println("Area of Rectangle: " + rectangle.area());
        System.out.println("Area of Triangle: " + triangle.area());
        System.out.println("Area of Square: " + square.area());

        // Using superclass references
        Figure figure1 = new Rectangle(3, 8);
        Figure figure2 = new Triangle(6, 12);

        // Testing method overriding with superclass references
        System.out.println("Area using Figure reference (Rectangle): " + figure1.area());
        System.out.println("Area using Figure reference (Triangle): " + figure2.area());
    }
}

