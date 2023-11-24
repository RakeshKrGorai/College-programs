/*Write a program by creating an 'Employee' class having the following methods and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameter
2 - 'addSal()' which adds $10 to salary of the employee if it is less than $500.
3 - 'addWork()' which adds $5 to salary of employee if the number of hours of work per day is more than 6 hours.
*/

import java.util.*;

class Employee {
    int salary, hours;

    void getInfo(int salary, int hours){
        this.salary = salary;
        this.hours = hours;
    }

    void addSal(){
        if(salary<500){
            salary+=10;
        }
    }

    void addWork(){
        if(hours>6){
            salary+=5;
        }
    }
}

class Driver {
    public static void main(String[] args) {
			int hours, salary;
      Employee emp = new Employee();
			Scanner sc = new Scanner(System.in);
      System.out.print("Enter salary : ");
      salary = sc.nextInt();
      System.out.print("Enter no of hours of work per day : ");
      hours = sc.nextInt();
      emp.getInfo(salary, hours);
      emp.addSal();
      emp.addWork();
      System.out.println("Final Salary: $" + emp.salary);
    }
}

