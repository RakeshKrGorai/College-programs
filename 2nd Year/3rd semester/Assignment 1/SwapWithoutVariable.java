//Write a program to swap two numbers without using a third variable.

class SwapWithoutVariable{
	public static void main(String[] args){
		int num1=10, num2=20, counter;
		System.out.print("Before Swap : ");
		System.out.println(num1+" "+num2);
		//Swapping logic
		num1= num1+num2;
		num2=num1-num2;
		num1=num1-num2;
		//Printing Swapped Values
		System.out.print("After Swap : ");
		System.out.println(num1+" "+num2);
	}
}
		