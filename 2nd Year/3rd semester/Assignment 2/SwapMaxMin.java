//Write a program to interchange the largest and smallest element of any array.

import java.util.*;

class SearchElement{
	public static void main(String[] args){
		int n, element, cnt=0, temp;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of elements : ");
		n = sc.nextInt();
		int arr[] =new int[n];
		System.out.print("Enter " +n+ " values : ");
		for (int i= 0; i<n; i++){
			arr[i] = sc.nextInt();
		}
		int max = 0, min = 0;
		for(int i=0;i<arr.length;i++){
			if(arr[min]> arr[i]){
				min = i;
			}
			else if(arr[max]<arr[i]){
				max= i;
			}
		}
		temp =arr[max];
		arr[max]= arr[min];
		arr[min]= temp;

		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}
