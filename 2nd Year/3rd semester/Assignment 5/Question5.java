/*
 Write a program that creates a class Account that have members customer name, account number. Account has constructor to initialize its members and method display() to show the result. Create a child class Savings_Account that is derived from Account class. Savings_Account have members min_bal and saving_bal. Use show() to display its details. Then create another child class Account_details from Savings_Account class have members deposit, withdrawl and a method show1() to show its details. Child classes have constructors of their own. Create a driver class that creates a record of customer and display all its details.
 */

import java.util.*;

class Account{
	String name;
	int accNo;
	Account(String name, int accNo){
		this.name = name;
		this.accNo = accNo;
	}

	void display(){
		System.out.println("Name : "+name);
		System.out.println("Account Number : "+accNo);
	}
}

class SavingsAccount extends Account{
	int minBal, savingBal;

	SavingsAccount(String name, int accNo, int minBal, int savingBal){
		super(name, accNo);
		this.minBal = minBal;
		this.savingBal = savingBal;
	}

	void show(){
		System.out.println("Minimum Balance : "+minBal);
		System.out.println("Saving Balance : " +savingBal);
	}
}

class AccountDetails extends SavingsAccount{
	int deposit, withdrawl;
	AccountDetails(String name, int accNo, int minBal, int savingBal, int deposit, int withdrawl){
		super(name, accNo, minBal, savingBal);
		this.deposit = deposit;
		this.withdrawl = withdrawl;
	}

	void show1(){
		super.display();
		super.show();
		System.out.println("Deposit : "+deposit);
		System.out.println("Withdrawls : "+withdrawl);
	}

}

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter employee name : ");
		String name = sc.next();
		System.out.print("Enter Account Number : ");
		int accNo = sc.nextInt();
		System.out.print("Enter Minimum Balance : ");
		int minBal = sc.nextInt();
		System.out.print("Enter Saving Balance : ");
		int savingBal = sc.nextInt();
		System.out.print("Enter Deposits : ");
		int deposit = sc.nextInt();
		System.out.print("Enter Withdrawls : ");
		int withdrawl = sc.nextInt();

		AccountDetails data = new AccountDetails(name, accNo, minBal, savingBal, deposit, withdrawl);
		data.show1();
	}
}
