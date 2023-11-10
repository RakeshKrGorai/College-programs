//Write a program to enter a number from 1 to 7 and display the corresponding day of the week using switch statement.


import java.util.*;

class PrintDay{
	public static void main(String[] arg){
		int day;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter a number between 1-7 : ");
		day = sc.nextInt();
		switch(day){
			case 1:
				System.out.println("Monday");
				break;
			case 2:
				System.out.println("Tuesday");
				break;
			case 3:
				System.out.println("Wednesday");
				break;
			case 4:
				System.out.println("Thursday");
				break;
			case 5:
				System.out.println("Friday");
				break;
			case 6:
				System.out.println("Saturday");
				break;
			case 7:
				System.out.println("Sunday");
				break;
			default:
				System.out.println("Error...Try again");
		}
	}
}
