//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a method named 'Area ()' which returns the area.

class AreaRectangle{
	int length, breadth;
	AreaRectangle(int length, int breadth){
		this.length = length;
		this.breadth = breadth;
	}
	void printData(){
		int area = length * breadth;
		System.out.println("Area for length = " + length + " & Breadth = "+breadth+ " is : "+area  );
	}
}

class Driver{
	public static void main(String[] args){
		AreaRectangle ar1 = new AreaRectangle(4,5);
		ar1.printData();
		AreaRectangle ar2 = new AreaRectangle(5,8);
		ar2.printData();
	}
}
