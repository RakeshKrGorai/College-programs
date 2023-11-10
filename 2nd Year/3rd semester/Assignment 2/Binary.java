//Write a program to find out the binary equivalent of any inputted decimal number.

import java.util.*;

class Binary{
	public static void main(String[] args){
		int num, bit, i=0;
		int a[] = new int [10];
		System.out.print("Enter a number : ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		while(num>0){
			bit = num%2;
			a[i++]= bit;
			//System.out.print(bit+ " ");
			num = num/2;
		}
		for(int j=i; j>=0;j--){
			System.out.print(a[j]+" ");
		}
	}
}
