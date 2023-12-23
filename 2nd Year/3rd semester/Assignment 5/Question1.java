/*
 Create a class with a method that prints "This is parent class" and its subclass with another method that prints "This is child class". Now, create an object for each of the class and call
		a)  method of parent class by object of parent class
    b) method of child class by object of child class
    c) method of parent class by object of child class
*/

class SuperClass{
	System.out.println("This is parent class");
}

class SubClass extends SuperClass{
	System.out.println("This is child class");
}

class Main{
	public static void main(){

	}
}
