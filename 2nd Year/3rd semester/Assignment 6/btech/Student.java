/*
 Create a Package btech which has one class Student. Accept student detail through parameterized constructor of Student class. Write a method display ()to display the student details. Create another class Test containing the main method which will use the package btech and calculate total marks and percentage of marks. One sample output is shown below.
 */

package btech;

public class Student{
	int roll;
	double mark1, mark2, mark3;
	String name;
	public Student(int roll, String name, double mark1, double mark2, double mark3){
		this.roll = roll;
		this.name = name;
		this.mark1 = mark1;
		this.mark2 = mark2;
		this.mark3 = mark3;
	}
	public void display(){
		System.out.println("Name : "+name);
		System.out.println("Roll No : "+roll);
		System.out.println("---Marks---");
		System.out.println("Sub 1 : "+mark1);
		System.out.println("Sub 2 : "+mark2);
		System.out.println("Sub 3 : "+mark3);
		System.out.println("Total : "+(mark1+mark2+mark3));
		System.out.println("Percentage : "+((mark1+mark2+mark3)/3.0) + " %");
	}
}
