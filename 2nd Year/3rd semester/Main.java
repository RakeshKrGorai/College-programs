/*
 Create a abstract class Bank that has abstract method getROI(). Create two classes SBI, PNB, BOI inherited from Bank. Create a driver class that prints the rate of interest of each bank using super class memory reference. 
 */

abstract class Bank {
    abstract double getROI();
}

class SBI extends Bank {
    double getROI() {
        return 7; 
		}
}

class PNB extends Bank {
    double getROI() {
        return 8; 
    }
}

class BOI extends Bank {
    double getROI() {
        return 9; 
    }
}

public class Main {
    public static void main(String[] args) {
        Bank sbi = new SBI();
        Bank pnb = new PNB();
        Bank boi = new BOI();

        System.out.println("SBI Rate of Interest: " + sbi.getROI()+"%");
        System.out.println("PNB Rate of Interest: " + pnb.getROI()+"%");
        System.out.println("BOI Rate of Interest: " + boi.getROI()+"%");
    }
}

