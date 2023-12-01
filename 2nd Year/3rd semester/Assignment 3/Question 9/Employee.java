/*Develop a java program that will deal with employee information of an organization. Define a class Employee. Minimum number of data member and member function are as follows:
Data members : empName, empNo, basicSal, da, hra, grossSal
Methods: calGrossSal(), showEmpDetails()
You are free to add more number of relevant data member and member function. Define parameterized constructor to intilaizeempName, empNo and basicSal. Create anytwo objects of Employee class and initialize their data members while object creation. Use the method calGrossSal()to calculate the gross salary and
*/

import java.util.*;

class Employee{
	String empName;
	int empNo;
	double da, hra, grossSal, basicSal;

	Employee(String empName, int empNo, double basicSal) {
		this.empName = empName;
    this.empNo = empNo;
    this.basicSal = basicSal;
    this.da = 0.2 * basicSal;
    this.hra = 0.1 * basicSal;
    this.grossSal = 0;
	}
	void showEmpDetails(){
		System.out.println("Employee Details:");
    System.out.println("Name: " + empName);
    System.out.println("Employee Number: " + empNo);
    System.out.println("Basic Salary: " + basicSal);
    System.out.println("DA (Dearness Allowance): " + da);
    System.out.println("HRA (House Rent Allowance): " + hra);
    System.out.println("Gross Salary: " + grossSal);
	}

	void calGrossSal() {
    this.grossSal = basicSal + da + hra;
	}
}

class Driver{
	public static void main(String[] args){
		Employee emp1 = new Employee("Ram",1,50000.0);
		Employee emp2 = new Employee("Shyam",2,40000.0);

		emp1.calGrossSal();
    emp2.calGrossSal();

		emp1.showEmpDetails();
		System.out.println();
		System.out.println();
		emp2.showEmpDetails();
	}
}
