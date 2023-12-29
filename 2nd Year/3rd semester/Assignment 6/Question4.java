/*
 Write a program to implement multiple inheritance using interface.
 */

interface interface1{
	void show();
}

interface interface2{
	void print();
}

class Run implements interface1, interface2{
	public void show(){
		System.out.println("Hello from interface 1 method");
	}
	public void print(){
		System.out.println("Bye from interface 2 method");
	}
}

class Main{
	public static void main(String[] args){
		Run ob1 = new Run();
		ob1.show();
		ob1.print();
	}
}
