/*Write an exception handling java program to print the index position of an existing integer array. The index value will be entered by user. It will be handled by exception handler if index position is greater then the size of array. In the exception handler the program should display appropriate message to the user. */
import java.util.*;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int arr[] = {10,20,30,40,50,60,70};
		System.out.print("Enter index value : ");
		int index = sc.nextInt();
		if(index>arr.length){
			throw new ArrayIndexOutOfBoundsException("Index value is greater than array size, retry.");
		}
		else{
			System.out.println("Value : "+ arr[index]);
		}
	}
}
