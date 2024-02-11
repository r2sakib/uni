public class Start {
    public static void main(String []args) {
        
        Book b1 = new Book("Sapiens", "Yuval Noah Harari", "001", "Non-fiction", 5);
        Book b2 = new Book("The Da Vinci Code", "Dan Brown", "002", "Fiction", 2);
        Book b3 = new Book();
        b3.setBookName("War and Peace");
        b3.setBookAuthor("Leo Tolstoy");
        b3.setBookId("003");
        b3.setBookType("Fiction");
        b3.setBookCopy(3);

        Book b4 = new Book();
        b4.setBookName("Norwegian Wood");
        b4.setBookAuthor("Haruki Murakami");
        b4.setBookId("004");
        b4.setBookType("Fiction");
        b4.setBookCopy(5);


        b1.showDetails();
        b2.showDetails();
        b3.showDetails();
        b4.showDetails();

        Book.totalNumberOfUniqueBooks();

        System.out.println(b1.getBookName());
        System.out.println(b1.getBookCopy());

    }
}