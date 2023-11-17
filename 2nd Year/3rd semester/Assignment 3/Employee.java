//Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'.

import java.util.*;

class Employee{
	String name;
	int year;
	int salary;
	String address;
	void addData(String name, int year, int salary, String address){
		this.name = name;
		this.year = year;
		this.salary = salary;
		this.address = address;
	}
	void printData(){
		System.out.println("Name: "+name);
		System.out.println("Year of Joining: "+year);
		System.out.println("Salary: "+salary);
		System.out.println("Address: "+address);
	}
}

class Driver{
	public static void main(String[] args){
		Employee employee[] = new Employee[3];
		Scanner sc = new Scanner(System.in);
		for(int i=0;i<3;i++){
			employee[i] = new Employee();
			System.out.print("Enter Name : ");
			String name = sc.next();
			System.out.print("Enter Year of Joining : ");
			int year = sc.nextInt();
			System.out.print("Enter Salary : ");
			int salary = sc.nextInt();
			System.out.print("Enter Address : ");
			String address = sc.next();
			employee[i].addData(name, year, salary, address);
		}
		for(int i = 0;i <3;i++){
			System.out.println("Employee "+(i+1)+ " : ");
			employee[i].printData();
		}
	}
}
