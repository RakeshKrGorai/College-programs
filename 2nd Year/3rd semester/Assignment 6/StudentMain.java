import btech.Student;
import java.util.*;

class StudentMain{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Roll No : ");
		int roll = sc.nextInt();
		System.out.print("Enter Name : ");
		String name = sc.next();
		System.out.print("Enter 3 sub marks : ");
		double mark1 = sc.nextDouble();
		double mark2 = sc.nextDouble();
		double mark3 = sc.nextDouble();
		Student std = new Student(roll, name, mark1, mark2, mark3);
		std.display();
	}
}
