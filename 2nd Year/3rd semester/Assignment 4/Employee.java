/*
Define a class Employee with the following members: 
Data members: 
private String empName 
private String empNo 
private int dependentCnt 
Methods:
Employee(String name, String eno, int depcnt): constructor 
void showEmpDetails():displays empNo and empName 
intdepCount(): returns dependentCnt 
Write a separate class called EmpTest with a main method that define an array of n employees where the value of n will be inputted from the user. Read and store the information of all n employees. Display the details of the employees with more than two dependents. 
*/

import java.util.*;

class Employee{
	private String empName, empNo;
	private int dependentCnt;

	Employee(String name, String eno, int depcnt){
		empName = name;
		empNo = eno;
		dependentCnt = depcnt;
	}

	Employee(){
		String empName, empNo;
		int dependentCnt;
	}

	int depCount(){
		return dependentCnt;
	}

	void showEmpDetails(){
		if(depCount()>2){
			System.out.println("Name : "+empName);
			System.out.println("Employee Number : "+empNo);
		}
	}
} 

class EmpTest{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.print("Enter number of employees : ");
		n = sc.nextInt();
		Employee emp[] = new Employee[n];

		for(int i = 0; i<n ; i++){
			System.out.print("Enter Name : ");
			String name = sc.next();
			System.out.print("Enter Employee Number : ");
			String empNo = sc.next();
			System.out.print("Enter no of dependents : ");
			int depcnt = sc.nextInt();
			emp[i] = new Employee(name, empNo, depcnt);
		}

		for(int i = 0;i <n;i++){
				emp[i].showEmpDetails();
		}

	}
}
