//Write a program to calculate tax, given the following conditions:
//		   If income is less than 150000 then no tax
//                 If taxable income is in the range 150001 to 300000 then charge 10% tax
//                 If taxable income is in the range 300001 to 500000 then charge 20% tax
//                 If taxable income is above 500001 then charge 30% tax

import java.util.*;

class TaxCalculate{
	public static void main(String[] args){
		int income, tax=0;
		double amount=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your income : ");
		income = sc.nextInt();
		if(income<150000){
			tax = 0;
		}
		else if(150001<income && income<300000){
			tax=10;
		}
		else if(300001<income && income<500000){
			tax = 20;
		}
		else if(income>500001){
			tax = 30;
		}
		amount = (income*tax)/100;
		System.out.println("Tax for the given amount of income is : "+amount);
	}
}

