/*
 Design a class ‘ComplexNum’ to manipulate Complex numbers having data members as real and img. The class should have a parameterized constructor to initialize its data members. It should also have methods displayCompNumber() to display the complex number (in the format 5+3i for example), addCompNumber() to add two Complex numbers. Test these methods by creating main method in another class.
 */
import java.util.*;

class ComplexNum{
	int real, imag;
	ComplexNum(){
		real =0;
		imag = 0;
	}
	ComplexNum(int r, int i){
		real = r;
		imag = i;
	}
	void displayCompNumber(){
		System.out.println(real+ " + "+imag+"i");
	}
	void addCompNumber(ComplexNum c1, ComplexNum c2){
		real = c1.real + c2.real;
		imag = c1.imag + c2.imag;
	}
}

class Driver{
	public static void main(String[] args){
		int r1, r2, i1, i2;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter real and imaginary part of 1st Complex Number : ");
		r1 = sc.nextInt();
		i1 = sc.nextInt();
		ComplexNum ob1 = new ComplexNum(r1, i1);
		System.out.print("Enter real and imaginary part of 2nd Complex Number : ");
		r2 = sc.nextInt();
		i2 = sc.nextInt();
		ComplexNum ob2 = new ComplexNum(r2, i2);
		ComplexNum ob3 = new ComplexNum();
		ob3.addCompNumber(ob1, ob2);
		ob3.displayCompNumber();
	}
}
