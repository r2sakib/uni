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

        BookList books = new BookList(10);

        System.out.println("===Welcome to Library Management System===");

        int option;

        while (true) {
            System.out.println(LINE);
            System.out.println("1. Show Available Books");
            System.out.println("2. Insert a New Book");
            System.out.println("3. Show a Book");
            System.out.println("4. Delete a Book");
            System.out.println("5. Search a Book By Name");
            System.out.println("0. Quit");
            System.out.println(LINE);
            System.out.print("Select option: ");

            option = sc.nextInt();

            if (option == 0) {
                break;
            }

            else if (option == 1) { 
                clearScreen();
                System.out.println("ALL BOOKS");
                System.out.println(LINE);

                books.showAll();
            }

            else if (option == 2) {
                clearScreen();
                System.out.println("ADDING BOOK");
                System.out.println(LINE);

                System.out.print("Enter book name: ");
                String bookName = scStr.nextLine();
                System.out.print("Enter Author: ");
                String bookAuthor = scStr.nextLine();
                System.out.print("Enter book ID: ");
                String bookId = scStr.nextLine();
                System.out.print("Enter book type: ");
                String bookType = scStr.nextLine();
                System.out.print("Enter book copy: ");
                int bookCopy = sc.nextInt();

                Book book = new Book(bookName, bookAuthor, bookId, bookType, bookCopy);
                boolean msg = books.insert(book);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("BOOK ADDED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("BOOK NOT ADDED.");
                }
            }

            else if (option == 3) {
                clearScreen();
                System.out.println("SHOW A BOOK");
                System.out.println(LINE);

                System.out.print("Enter book ID: ");
                String bookId = scStr.nextLine();
                books.showABook(bookId);
            }

            else if (option == 4) {
                clearScreen();
                System.out.println("REMOVING BOOK");
                System.out.println(LINE);

                System.out.print("Enter book ID: ");
                String bookId = scStr.nextLine();
                boolean msg = books.delete(bookId);

                if (msg == true) {
                    System.out.println(LINE);
                    System.out.println("BOOK REMOVED SUCCESFULLY.");
                } else {
                    System.out.println(LINE);
                    System.out.println("BOOK NOT FOUND.");
                }
            }

            

            else if (option == 5) {
                clearScreen();
                System.out.println("SEARCH A BOOK BY NAME");
                System.out.println(LINE);

                System.out.print("Enter book name: ");
                String bookName = scStr.nextLine();
                books.searchABookByName(bookName);
            }
        }
    }
}
