import java.util.Scanner;

public class Start {
    public static void main(String []args) {
        Scanner scStr = new Scanner(System.in);
        Scanner sc = new Scanner(System.in);

        Book b1 = new Book(scStr.nextLine(), scStr.nextLine(), scStr.nextLine(), scStr.nextLine(), sc.nextInt() );
        Book b2 = new Book(scStr.nextLine(), scStr.nextLine(), scStr.nextLine(), scStr.nextLine(), sc.nextInt());
        Book b3 = new Book();
        b3.setBookName(scStr.nextLine());
        b3.setBookAuthor(scStr.nextLine());
        b3.setBookId(scStr.nextLine());
        b3.setBookType(scStr.nextLine());
        b3.setBookCopy(sc.nextInt());

        Book b4 = new Book();
        b4.setBookName(scStr.nextLine());
        b4.setBookAuthor(scStr.nextLine());
        b4.setBookId(scStr.nextLine());
        b4.setBookType(scStr.nextLine());
        b4.setBookCopy(sc.nextInt());


        b1.showDetails();
        b2.showDetails();
        b3.showDetails();
        b4.showDetails();

        Book.totalNumberOfUniqueBooks();

        System.out.println(b1.getBookName());
        System.out.println(b1.getBookCopy());

    }
}