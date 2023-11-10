//Write a program to enter the marks of a student in 4 different subjects. Then display the grade of the student as per the following conditions:
//                 If the average mark is greater than or equal to 90 then grade is O
//                 If the average mark is greater than equal to 80 but less than 90 then grade is E
//                 If the average mark is greater than equal to 70 but less than 80 then grade is A
//                 If the average mark is greater than equal to 60 but less than 70 then grade is B
//                 If the average mark is greater than equal to 50 but less than 60 then grade is C
//                 If the average mark is less than 50 then grade is F

import java.util.*;

class Grades{
	public static void main(String[] args){
		int mark1, mark2, mark3, mark4, avg;
		char grade;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter marks scored in 4 subjects : ");
		mark1 = sc.nextInt();
		mark2= sc.nextInt();
		mark3 = sc.nextInt();
		mark4 = sc.nextInt();
		avg = (mark1+mark2+mark3+mark4)/4;
		switch(avg/10){
			case 10:
				grade = '0';
				break;
			case 9:
				grade = 'O';
				break;
			case 8:
				grade = 'E';
				break;
			case 7:
				grade = 'A';
				break;
			case 6:
				grade = 'B';
				break;
			case 5:
				grade = 'C';
				break;
			default:
				grade = 'F';
		}
		System.out.println("Grade : "+grade);
	}
}

