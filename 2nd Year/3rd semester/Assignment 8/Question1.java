/*
 Write a java program that will create a thread and set the thread name, display the thread name, get the thread id, check the thread is currently alive or not.
 */

class MyThread extends Thread{
	int threadNumber;
	MyThread(int n){
		threadNumber = n;
	}
	public void run(){
		Thread t = Thread.currentThread();
		String s = t.getName();
		for(int i=0;i<3;i++){	
			System.out.println("Thread Name : "+s);
		}
	}
}


class Main{
	public static void main(String[] args){
		Thread th = Thread.currentThread();
		String s = th.getName();
		System.out.println("Name of the main thread : "+s);
		String names[]={"Thread1", "Thread2", "Thread3"};
		for(int i=0;i<3;i++){
			MyThread t= new MyThread(i);
			t.setName(names[i]);
			t.start();
		}
		System.out.println("Alive? :" +th.isAlive());
	}
}
			
