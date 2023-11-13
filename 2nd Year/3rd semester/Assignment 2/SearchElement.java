//Write a program that declares an array of n integers and searches an inputted element is present in the array or not. If present, then display the position of the element in the array

import java.util.*;

class SearchElement{
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
		System.out.print("Enter element to be searched : ");
		element = sc.nextInt();
		for(int i=0;i<arr.length;i++){
			if(element == arr[i]){
				cnt++;
				System.out.println(element +" is found at position " + (i+1));
				break;
			}
			else{
				continue;
			}
		}
		if(cnt==0){
			System.out.println("Element not found...");
		}

	}
}
