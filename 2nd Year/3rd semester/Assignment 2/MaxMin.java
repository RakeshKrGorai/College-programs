//Write a program to display the maximum and minimum element present in the array. 

import java.util.*;

class MaxMin{
	public static void main(String[] args){
		int n, element, cnt=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of elements : ");
		n = sc.nextInt();
		int arr[] =new int[n];
		System.out.print("Enter " +n+ " values : ");
		for (int i= 0; i<n; i++){
			arr[i] = sc.nextInt();
		}
		int max = arr[0], min = arr[0];
		for(int i=0;i<arr.length;i++){
			if(min> arr[i]){
				min = arr[i];
			}
			else if(max<arr[i]){
				max= arr[i];
			}
		}
		System.out.println("Minimum : "+ min+ " Maximum : "+ max);

	}
}
