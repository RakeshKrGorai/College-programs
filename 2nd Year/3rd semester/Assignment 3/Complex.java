//Print the sum of two complex numbers by creating a class named 'Complex’ whose real and imaginary parts are entered by user.

import java.util.*;

class Complex{
	int real, imag;
	Complex(){
		real =0;
		imag = 0;
	}
	Complex(int r, int i){
		real = r;
		imag = i;
	}
	void dispComplex(){
		System.out.println(real +"+i"+imag);
	}
	void add(Complex c1, Complex c2){
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
		Complex ob1 = new Complex(r1, i1);
		System.out.print("Enter real and imaginary part of 2nd Complex Number : ");
		r2 = sc.nextInt();
		i2 = sc.nextInt();
		Complex ob2 = new Complex(r2, i2);
		Complex ob3 = new Complex();
		ob3.add(ob1, ob2);
		ob3.dispComplex();
	}
}
