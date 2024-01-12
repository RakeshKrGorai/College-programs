/*
 Write a java program, that will create one thread. The main thread will read a number and check the number is prime or composite and the same time the new thread will check the number palindrome or not.
 */

import java.util.*;

/*class MyThread1 extends Thread{
	int num;
	MyThread1(int num){
		this.num = num;
	}
	public void run(){
		Thread t = Thread.currentThread();
		int cp = num, cnt=0;
		for(int i=2;i<num;i++){
			if(cp%i==0){
				cnt++;
				break;
			}
			else{
				continue;
			}
		}
		if(cnt==0){
			System.out.println("Prime number");
		}
		else{
			System.out.println("Composite number");
		}
	}
}
*/

class MyThread2 extends Thread{
	int num;
	MyThread2(int num){
		this.num = num;
	}
	public void run(){
		Thread t = Thread.currentThread();
		int cp = num, rev=0, digit;
		while(cp>0){
			digit = cp%10;
			rev = rev*10+digit;
			cp/=10;
		}
		if(rev==num){
			System.out.println("Pallindrome");
		}
		else{
			System.out.println("Not Pallindrome");
		}
	}

}

class Main{
	public static void main(String[] args){
		Thread th = Thread.currentThread();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number to check : ");
		int num = sc.nextInt();
		int cp = num, cnt=0;
		for(int i=2;i<num;i++){
			if(cp%i==0){
				cnt++;
				break;
			}
			else{
				continue;
			}
		}
		if(cnt==0){
			System.out.println("Prime number");
		}
		else{
			System.out.println("Composite number");
		}

		//MyThread1 thread1 = new MyThread1(num);
		MyThread2 thread2 = new MyThread2(num);
		//thread1.start();
		thread2.start();
	}
}
			
