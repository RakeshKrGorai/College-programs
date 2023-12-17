/*
 Write a program that will take two integer numbers from the command prompt and find their GCD and LCM. If the user does not provide exactly two numbers of argument then the program should display error message. 
 */

class CalOps{
	public static void main(String[] args){
		if(args.length==2){
			int n1 = Integer.parseInt(args[0]);
			int n2 = Integer.parseInt(args[1]);
			System.out.println("LCM of given numbers : "+lcmCalc(n1,n2)+" HCF : "+hcfCalc(n1,n2));
		}
		else{
			System.out.println("Enter exactly 2 arguments!");
		}
	}
	static int hcfCalc(int n1, int n2){
		int hcf = 1;
		for(int i=2;i<=n1;i++){
			if(n1%i==0 && n2%i==0){
				hcf = i;
			}
			else{
				continue;
			}
		}
		return hcf;
	}
	static int lcmCalc(int n1, int n2){
		int lcm = 1;
		int max = (n1>n2)?n1:n2;
		while(true){
			if(max%n1==0 && max%n2==0){
				lcm = max;
				break;
			}
			++max;
		}
		return lcm;
	}
}
