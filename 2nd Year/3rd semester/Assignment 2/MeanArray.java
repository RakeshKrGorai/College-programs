//Write a program to find the mean of n numbers using an array.

import java.util.*;

class MeanArray{
	public static void main(String[] args){
		int n, sum=0;
		double avg;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter value of n : ");
		n = sc.nextInt();
		int arr[] = new int[n];
		System.out.print("Enter "+n+" values : ");
		for(int i=0;i<n;i++){
			arr[i] = sc.nextInt();
		}
		for(int j=0;j<n;j++){
			sum+=arr[j];
		}
		avg = sum/n;
		System.out.println("Mean : "+avg);
	}
}
