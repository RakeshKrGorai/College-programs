/*
 Define an abstract class named “Figure”, having data members dim1 and dim2. Extend this class to create two concrete classes named Rectangle and Triangle. Override the getArea() method in the sub classes. Invoke the getArea() method in the main method of another Driver class through the abstract class reference variable.  
 */

// Abstract Figure class
abstract class Figure {
    double dim1;
    double dim2;

    public Figure(double dim1, double dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }

    public abstract double getArea();
}

class Rectangle extends Figure {
    public Rectangle(double length, double width) {
        super(length, width);
    }

    public double getArea() {
        return dim1 * dim2;
    }
}

class Triangle extends Figure {
    public Triangle(double base, double height) {
        super(base, height);
    }

    public double getArea() {
        return 0.5 * dim1 * dim2;
    }
}

public class Main {
    public static void main(String[] args) {
        Figure figure1 = new Rectangle(5, 10);
        Figure figure2 = new Triangle(4, 6);

        System.out.println("Area of Rectangle: " + figure1.getArea());
        System.out.println("Area of Triangle: " + figure2.getArea());
    }
}

