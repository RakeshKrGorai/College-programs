//Write a program to Create a class named 'Student' with String variable 'name' and integer variable 'roll_no'. Assign the value of roll_no as '20' and that of name as "John" by creating an object of the class Student.

class Student{
	String name;
	int roll_no;
	Student(String name, int roll_no){
		this.name = name;
		this.roll_no = roll_no;
	}
	void printData(){
		System.out.println("Name : "+name+"\nRoll : "+roll_no);
	}
}

class Driver{
	public static void main(String[] args){
		Student st = new Student("John", 20);
		st.printData();
	}
}
