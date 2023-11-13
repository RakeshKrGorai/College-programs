//Write a program to enter elements into a 2-D array and then display them

import java.util.*;

class MultiDimensionalArray{
	public static void main(String[] args){
		int row, col;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter no of rows & columns : ");
		row = sc.nextInt();
		col = sc.nextInt();
		int arr[][]= new int[row][col];
		for(int i=0;i<row;i++){
			System.out.print("Enter "+col+ " elements for row "+(i+1)+" : ");
			for(int j=0;j<col;j++){
				arr[i][j] = sc.nextInt();
			}
		}

		//printing values
		System.out.println("Given 2D Array : ");
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				System.out.print(arr[i][j]+ " ");
			}
			System.out.println();
		}
	}
}

