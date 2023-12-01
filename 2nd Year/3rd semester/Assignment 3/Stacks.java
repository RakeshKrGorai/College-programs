//Define a class Stack, which perform the basic operation of stack. Define another driver class to demonstrate the basic operations.

import java.util.*;

class Stacks{
	int MAX = 100;
	int top=-1;
	int stackArr[] = new int[MAX];

	void push(int element){
		if(top==MAX-1){
			System.out.println("Stack is Full...can't push anymore");
		}
		else{
			stackArr[++top] = element;
		}
	}

	int pop(){
		if(top==-1){
			System.out.println("No element in stack");
			return -1;
		}
		else{
			int x = stackArr[top];
			top--;
			System.out.println("Popped element : "+x);
			return x;
		}
	}

	void display(){
		if(top==-1){
			System.out.println("Empty Stack");
		}
		else{
			/*for(int element:stackArr){
				System.out.print(element+" ");
			}*/
			int x = 0;
			while(x<=top){
				System.out.print(stackArr[x]+" ");
				x++;
			}
			System.out.println();
		}
	}
}

class Driver{
	public static void main(String[] args){
		Stacks stack = new Stacks();

		stack.push(20);
		stack.push(30);
		stack.push(40);

		stack.pop();
		stack.display();
	}
}
