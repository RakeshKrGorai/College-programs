//Write a program to find the mean of n numbers using an array.

import java.util.*;

class LargestArray{
	public static void main(String[] args){
		int n, largest;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter value of n : ");
		n = sc.nextInt();
		int arr[] = new int[n];
		System.out.print("Enter "+n+" values : ");
		for(int i=0;i<n;i++){
			arr[i] = sc.nextInt();
		}
		largest = arr[0];
		for(int j=1;j<n;j++){
			if(arr[j]>largest){
				largest = arr[j];
			}
		}
		System.out.println("Largest Element : "+largest);
	}
}
