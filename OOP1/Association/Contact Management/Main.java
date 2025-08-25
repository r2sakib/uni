import java.util.Scanner;

public class Main {
    public static void clearScreen() {  
        System.out.print("\033[H\033[2J");  
        System.out.flush();  
    }

    public static String LINE = "---------------------------------";

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Scanner scStr = new Scanner(System.in);

        ContactList contacts = new ContactList(10);

        System.out.println("===Welcome to Contact Management System===");

        int option;

        while (true) {
            System.out.println(LINE);
            System.out.println("1. Show Available Contact");
            System.out.println("2. Insert a New Contact");
            System.out.println("3. Show a Contact");
            System.out.println("4. Delete a Contact");
            System.out.println("5. Search a Contact By Name");
            System.out.println("6. Search a Contact By Number");
            System.out.println("7. Update a Contact");
            System.out.println("0. Quit");
            System.out.println(LINE);
            System.out.print("Select option: ");

            option = sc.nextInt();

            if (option == 0) {
                break;
            }

            else if (option == 1) { 
                clearScreen();
                System.out.println("ALL CONTACTS");
                System.out.println(LINE);

                contacts.showAll();
            }

            else if (option == 2) {
                clearScreen();
                System.out.println("ADDING CONTACT");
                System.out.println(LINE);

                System.out.print("Enter name: ");
                String personName = scStr.nextLine();

                System.out.print("Enter ID: ");
                String personId = scStr.nextLine();

                System.out.print("Enter age: ");
                int age = sc.nextInt();

                System.out.print("Enter mobile number: ");
                String mobileNumber = scStr.nextLine();

                System.out.print("Enter gender: ");
                char gender = sc.next().charAt(0);

                Contact contact = new Contact(personName, personId, age, mobileNumber, gender);
                boolean msg = contacts.insert(contact);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("CONTACT ADDED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("CONTACT NOT ADDED.");
                }
            }

            else if (option == 3) {
                clearScreen();
                System.out.println("SHOW A CONTACT");
                System.out.println(LINE);

                System.out.print("Enter ID: ");
                String personId = scStr.nextLine();
                
                Contact contact = contacts.getContactById(personId);
                if (contact != null) {
                    contact.showDetails();
                }
                else {
                    System.out.println(LINE);
                    System.out.println("CONTACT NOT FOUND");
                }
            }

            else if (option == 4) {
                clearScreen();
                System.out.println("DELETING CONTACT");
                System.out.println(LINE);

                System.out.print("Enter ID: ");
                String personId = scStr.nextLine();
                boolean msg = contacts.delete(personId);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("CONTACT REMOVED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("CONTACT NOT FOUND.");
                }
            }

            
            else if (option == 5) {
                clearScreen();
                System.out.println("SEARCH A CONTACT BY NAME");
                System.out.println(LINE);

                System.out.print("Enter name: ");
                String personName = scStr.nextLine();
                
                Contact contact = contacts.getContactByName(personName);
                if (contact != null) {
                    contact.showDetails();
                }
                else {
                    System.out.println(LINE);
                    System.out.println("CONTACT NOT FOUND");
                }
            }

            else if (option == 6) {
                clearScreen();
                System.out.println("SEARCH A CONTACT BY NUMBER");
                System.out.println(LINE);

                System.out.print("Enter number: ");
                String mobileNumber = scStr.nextLine();
                
                Contact contact = contacts.getContactByNumber(mobileNumber);
                if (contact != null) {
                    contact.showDetails();
                }
                else {
                    System.out.println(LINE);
                    System.out.println("CONTACT NOT FOUND");
                }
            }

            else if (option == 7) {
                int edit_option;

                clearScreen();
                while (true) {
                    System.out.println("1. Update Name");
                    System.out.println("2. Update Number");
                    System.out.println("0. Go back");
                    System.out.println(LINE);
                    System.out.print("Select Option: ");

                    edit_option = sc.nextInt();

                    if (edit_option == 1) {
                        System.out.print("Enter Current Name: ");
                        String personName = scStr.nextLine();

                        Contact contact = contacts.getContactByName(personName);
                        
                        if (contact != null) {
                            contact.showDetails();
                            System.out.println(LINE);

                            System.out.print("Enter New Name: ");
                            String newPersonName = scStr.nextLine();

                            clearScreen();
                            contact.setPersonName(newPersonName);
                            System.out.println("NAME UPDATED SUCCESSFULLY");
                            contact.showDetails();
                        }
                        else {
                        System.out.println(LINE);
                            System.out.println("CONTACT NOT FOUND");
                        }
                        
                    }

                    if (edit_option == 2) {
                        System.out.print("Enter Name: ");
                        String personName = scStr.nextLine();

                        Contact contact = contacts.getContactByName(personName);
                        
                        if (contact != null) {
                            contact.showDetails();
                            System.out.println(LINE);

                            System.out.print("Enter New Number: ");
                            String mobileNumber = scStr.nextLine();

                            clearScreen();
                            contact.setMobileNumber(mobileNumber);
                            System.out.println("NUMBER UPDATED SUCCESSFULLY");
                            contact.showDetails();
                        }
                        else {
                            System.out.println(LINE);
                            System.out.println("CONTACT NOT FOUND");
                        }
                        
                    }

                    if (edit_option == 0) {
                        break;
                    }
                }
            }
        }
    }
}
