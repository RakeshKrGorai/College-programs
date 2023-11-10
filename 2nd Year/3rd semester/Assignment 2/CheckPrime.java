//Write a program to check whether an inputted number is prime or not.

import java.util.*;

class CheckPrime{
	public static void main(String[] args){
		int number, cnt=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number : ");
		number= sc.nextInt();
		for(int i=2; i<(number/2);i++){
			if(number%i==0){
				cnt++;
			}
			else{
				continue;
			}
		}
		if(cnt==0){
			System.out.println("Prime Number");
		}
		else{
			System.out.println("Not prime");
		}
	}
}
