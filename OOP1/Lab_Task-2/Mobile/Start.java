import java.util.Scanner;   

public class Start {
    public static void main (String []args) {
        Scanner sc = new Scanner(System.in);
        Scanner scStr = new Scanner(System.in);

        Mobile m1 = new Mobile(scStr.nextLine(), scStr.nextLine(), sc.nextInt(), scStr.nextLine(), sc.nextBoolean());
        Mobile m2 = new Mobile("Jane Doe", "016111111111", 30, "iOS", true);
        Mobile m3 = new Mobile("Jon Doe", "015111111111", 100, "iOS", true);
        Mobile m4 = new Mobile();

        m4.setMobileOwnerName("Jon Snow");
        m4.setMobileNumber("01312312322");
        m4.setMobileBalance(45);
        m4.setMobileOSName("Android");
        m4.setLock(true);

        m1.showDetails();

        m1.setLock(false);
        m1.showDetails();

        m2.setLock(false);
        m2.showDetails();

        m3.setLock(false);
        m3.showDetails();

        m4.setLock(false);
        m4.showDetails();


        m1.setLock(false);
        m1.recharge(50);
        m1.adjustAfterCall(2, 3);

    }
}