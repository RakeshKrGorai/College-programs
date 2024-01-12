/*
 Write a java program that will create one child thread. The child thread has to display all odd numbers between m and n, and the main thread will display all the even numbers between m and n.
 */

import java.util.*;

class MyThread2 extends Thread{
	int num1, num2;
	MyThread2(int num1, int num2){
		this.num1 = num1;
		this.num2 = num2;
	}
	public void run(){
		Thread t = Thread.currentThread();
		for(int i=num1; i<num2;i++){
			if(i%2!=0){
				System.out.print(i+" ");
			}
		}
	}
}

class Main{
	public static void main(String[] args){
		Thread th = Thread.currentThread();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter 2 numbers : ");
		int m = sc.nextInt();
		int n = sc.nextInt();
		MyThread2 thread2 = new MyThread2(m, n);
		thread2.start();
		for(int i=m;i<n;i++){
			if(i%2==0){
				System.out.print(i+" ");
			}
		}
	}
}
			
