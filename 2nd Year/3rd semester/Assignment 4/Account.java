/*6. Create a class Account having data members accNo, balance, timePeriod and int InYears(as static and initialize with 7.5%). The class should also contain the 
following methods: 

float calculateInterst() which calculates and returns the interest amount. 

void showAccDetails() which displays account number, balance and calculated interest amount. 

static void changeIntRate(float newRate) which changes the interest rate to newRate. 

Create an array of object of the class Account. Store the details of each object through the parameterized constructor. Display all the account details by calling the method showAccDetails(). Change the interest rate to a new one by calling the method changeIntRate(). Finally display the account details after the change in interest rate.
*/

import java.util.*;

class Account{
	int accNo, balance, timePeriod;
	static float InYears = 7.5f;
	float amount;

	Account(){
		accNo = 0;
		balance = 0;
		timePeriod = 0;
	}

	Account(int a,int b, int t){
		accNo = a;
		balance = b;
		timePeriod = t;
	}

	float calculateInterest(){
		amount = ((balance*timePeriod*InYears)/100);
		return amount;
	}

	void showAccDetails(){
		System.out.println("Account No : " +accNo);
		System.out.println("Balance : "+balance);
		System.out.println("Interest Amount : "+amount);
	}

	static void changeInRate(float newRate){
				InYears = newRate;
	}
}


class Driver{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.print("Enter number of accounts : ");
		n = sc.nextInt();
		Account acc[] = new Account[n];
		for(int i = 0; i < n;i++){
			System.out.println("Employee "+(i+1));
			System.out.print("Account No: ");
			int accNo = sc.nextInt();
			System.out.print("Balance : ");
			int balance = sc.nextInt();
			System.out.print("Time : ");
			int time = sc.nextInt();
			acc[i] = new Account(accNo, balance, time);
		}

		//For printing
		for(int i=0;i<n;i++){
			acc[i].calculateInterest();
			acc[i].showAccDetails();
		}

		Account ac = new Account();
		System.out.print("Enter new rate : ");
		float rate = sc.nextFloat();
		System.out.println("Updated salary after change in rate of interest : ");

		ac.changeInRate(rate);

		for(int i=0;i<n;i++){
			acc[i].calculateInterest();
			acc[i].showAccDetails();
		}

	}
}
