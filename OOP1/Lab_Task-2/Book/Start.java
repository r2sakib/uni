import java.util.Scanner;

public class Start {
    public static void main(String []args) {
        Scanner scStr = new Scanner(System.in);
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of books: ");
        int size = sc.nextInt();

        Book books[] = new Book[size];

        for (int i = 0; i < size; i++) {
            books[i] = new Book();
            
            System.out.println("Enter information for book " + (i+1));
            System.out.print("Book Name: ");
            books[i].setBookName(scStr.nextLine());
            System.out.print("Author Name: ");
            books[i].setBookAuthor(scStr.nextLine());
            System.out.print("Id: ");
            books[i].setBookId(scStr.nextLine());
            System.out.print("Book type: ");
            books[i].setBookType(scStr.nextLine());
            System.out.print("Copy: ");
            books[i].setBookCopy(sc.nextInt());
        }

        for (int i = 0; i < size; i++) {
            System.out.println("Information for book " + (i+1));
            books[i].showDetails();
        }

        Book.totalNumberOfUniqueBooks();

    }
}