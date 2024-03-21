import java.util.Scanner;

public class Main {
    public static void clearScreen() {  
        System.out.print("\033[H\033[2J");  
        System.out.flush();  
    }

    public static String LINE = "----------------------------";

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Scanner scStr = new Scanner(System.in);

        StudentList students = new StudentList(10);

        int option;

        while (true) {
            System.out.println(LINE);
            System.out.println("1. Add a student");
            System.out.println("2. Remove a student");
            System.out.println("3. Show all students");
            System.out.println("4. Issue ID card");
            System.out.println("0. Quit");
            System.out.println(LINE);
            System.out.print("Select option: ");

            option = sc.nextInt();

            if (option == 0) {
                break;
            }
            else if (option == 1) {
                clearScreen();
                System.out.println("ADDING STUDENT");
                System.out.println(LINE);

                System.out.print("Enter name: ");
                String name = scStr.nextLine();
                System.out.print("Enter ID: ");
                String id = scStr.nextLine();
                System.out.print("Enter deparment: ");
                String depatment = scStr.nextLine();
                System.out.print("Enter CGPA: ");
                float cgpa = sc.nextFloat();

                Student student = new Student(name, id, depatment, cgpa);
                boolean msg = students.insert(student);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("STUDENT ADDED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("STUDENT NOT ADDED.");
                }
            }
            else if (option == 2) {
                clearScreen();
                System.out.println("REMOVING STUDENT");
                System.out.println(LINE);

                System.out.print("Enter ID: ");
                String id = scStr.nextLine();
                boolean msg = students.remove(id);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("STUDENT REMOVED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("STUDENT NOT FOUND.");
                }
            }

            else if (option == 3) { 
                clearScreen();
                System.out.println("ALL STUDENTS");
                System.out.println(LINE);

                students.showAll();
            }

            else if (option == 4) {
                clearScreen();
                System.out.println("ISSUING ID CARD");
                System.out.println(LINE);

                System.out.print("Enter student ID: ");
                String id = scStr.nextLine();
                Student student = students.getStudent(id);

                if (student != null) {
                    System.out.print("Enter ID card serial: ");
                    String serial = scStr.nextLine();
                    System.out.print("Enter validity: ");
                    String validity = scStr.nextLine();
                    System.out.print("Enter printing balance: ");
                    double printingBalance = sc.nextFloat();
                    
                    StudentIDCard idCard = new StudentIDCard(serial, validity, printingBalance);

                    student.setIdCard(idCard);
                }
                else {
                    System.out.println(LINE);
                    System.out.println("STUDENT NOT FOUND.");
                }
            }
        }
    }
}
