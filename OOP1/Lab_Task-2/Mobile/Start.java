import java.util.Scanner;   

public class Start {
    public static void main (String []args) {
        Scanner sc = new Scanner(System.in);
        Scanner scStr = new Scanner(System.in);

        System.out.print("Enter number of mobiles: ");
        int size = sc.nextInt();

        Mobile mobiles[] = new Mobile[size];

        for (int i = 0; i < size; i++) {
            mobiles[i] = new Mobile();
            System.out.println("Enter information for mobile " + (i+1));
            System.out.print("Owner Name: ");
            mobiles[i].setMobileOwnerName(scStr.nextLine());
            System.out.print("Mobile number: ");
            mobiles[i].setMobileNumber(scStr.nextLine());
            System.out.print("Mobile Balance: ");
            mobiles[i].setMobileBalance(sc.nextDouble());
            System.out.print("Mobile OS Name: ");
            mobiles[i].setMobileOSName(scStr.nextLine());
            System.out.print("Lock: ");
            mobiles[i].setLock(sc.nextBoolean());
        }

        for (int i = 0; i < size; i++) {
            System.out.println("Information for mobile " + (i+1));
            mobiles[i].setLock(false);
            mobiles[i].showDetails();
        }


        // m1.setLock(false);
        // m1.recharge(50);
        // m1.adjustAfterCall(2, 3);

    }
}