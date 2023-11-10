//Write a program to enter the distance value in meters and then display it in Km: Meter format using modulus operator

import java.util.*;

class DistanceConverter{
	public static void main(String[] arg){
		int meter, kilometer;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter distance value in meters : ");
		meter = sc.nextInt();
		kilometer = meter/1000;
		meter = meter%1000;
		System.out.println(kilometer+" kilometers " + meter +" meters");

	}
}

