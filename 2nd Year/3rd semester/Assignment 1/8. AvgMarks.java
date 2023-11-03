//Write a program to input the marks of a student in three different subjects and then display the average mark.

import java.util.*;

class AvgMarks{
	public static void main(String[] args){
		double marks1, marks2, marks3, average;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter marks of 3 subjects : ");
		marks1= sc.nextDouble();
		marks2= sc.nextDouble();
		marks3= sc.nextDouble();
		average = (marks1+marks2+marks3)/3;
		System.out.println("Avergae Marks : "+average);
	}
}