//Write a program to convert the temperature from Fahrenheit scale to Celsius scale.

import java.util.*;

class TempConvert{
	public static void main(String args[]){
		double temperature, output;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter temperature in celsius : ");
		temperature = sc.nextDouble();
		output = ((9/5)*(temperature))+32;
		System.out.println("Temperature in fahrenheit : "+output);
	}
}