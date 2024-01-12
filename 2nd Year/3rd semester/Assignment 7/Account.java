/*
6. Write a class called Account with the following properties and methods:Properties: String name, int acc_no, double balance		Methods:  void deposit (double amt), void withdraw (double amt), void transfer (Account acc1, Account acc2, double amt). Assume that an account needs to have a minimum balance of 500. If an attempt is made to withdraw or transfer, which results in balance going below 500, throw a user defined exception called MinimumBalanceException. Use throw and throws wherever necessary
*/
import java.util.*;

class MinimumBalanceException extends Exception {
  public MinimumBalanceException(String str) {
		super(str);
  }
}

class Account{
	String name;
	int acc_no;
	double balance;

	Account(){
		name= null;
		acc_no=0;
		balance=0;
	}

	Account(String name, int acc_no, double balance){
		this.name = name;
		this.acc_no = acc_no;
		this.balance = balance;
	}

	void deposit(double balance){
		this.balance += balance;
	}

	void withdraw(double amt) throws MinimumBalanceException{
		if (balance - amt < 500) {
      throw new MinimumBalanceException("Error, balance cannot be less than 500");
    }
		else{
      balance -= amt;
      System.out.println("Withdrawal successful. Updated balance: " + balance);
    }
	}

	void transfer(Account acc1, Account acc2, double amt) throws MinimumBalanceException{
		acc1.withdraw(amt);
    acc2.deposit(amt);
    System.out.println("Transferred from " + acc1.name + " to " + acc2.name);
	}

	void display(){
		System.out.println("Name : "+name);
		System.out.println("Acc no : "+acc_no);
		System.out.println("Balance : "+balance);
	}

}

class AccountMain{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter amount to withdraw from acc 1 :");
		int wd = sc.nextInt();
		Account acc1 = new Account("Rahul", 54, 1000);
		Account acc2 = new Account("Sumit", 52, 1000);
		Account acc3 = new Account();
		try{
			acc3.transfer(acc1, acc2, wd);
		}
		catch(MinimumBalanceException e){
			System.out.println("Transfer failed, Balance cannot go below 500");
		}
		System.out.println("Updated Details : ");
		acc1.display();
		acc2.display();
	}
}
