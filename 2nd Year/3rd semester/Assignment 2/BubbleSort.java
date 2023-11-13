//Write a program to sort an array of n integers using bubble sort

import java.util.*;

class MeanArray{
	public static void main(String[] args){
		int n, sum=0, temp;
		double avg;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter value of n : ");
		n = sc.nextInt();
		int arr[] = new int[n];

		System.out.print("Enter "+n+" values : ");
		for(int i=0;i<n;i++){
			arr[i] = sc.nextInt();
		}

		System.out.print("Unsorted Array : ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+ " ");
		}
		System.out.println();

		//Bubble Sort Logic
		
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr.length-1-i;j++){
				if(arr[j]>arr[j+1]){
					temp= arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;;
				}
				else{
					continue;
				}
			}
		}

		System.out.print("Sorted Array : ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+ " ");
		}
		System.out.println();
		//printArray(arr);
	}
}
