import java.util.Scanner;

public class Start {
    public static void main (String []args) {
        Scanner sc = new Scanner(System.in);
        Scanner scStr = new Scanner(System.in);

        System.out.print("Enter number of contacts: ");
        int size = sc.nextInt();

        Contact contacts[] = new Contact[size];

        for (int i = 0; i < size; i++) {
            contacts[i] = new Contact();

            System.out.println("Enter information for contact " + (i+1));
            System.out.print("Name: ");
            contacts[i].setPersonName(scStr.nextLine());
            System.out.print("ID: ");
            contacts[i].setPersonId(scStr.nextLine());
            System.out.print("Age: ");
            contacts[i].setAge(sc.nextInt());
            System.out.print("Mobile number: ");
            contacts[i].setMobileNumber(scStr.nextLine());
            System.out.print("Gender: ");
            contacts[i].setGender(scStr.nextLine().charAt(0));
        }

        for (int i = 0; i < size; i++) {
            System.out.println("Information for student " + (i+1));
            contacts[i].showDetails(); 
        }
    }
}