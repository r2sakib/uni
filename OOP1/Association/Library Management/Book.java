public class Book {
    private String bookName;
    private String bookAuthor;
    private String bookId;
    private String bookType;
    private int bookCopy;

    private static int uniqueBookCounter;
    
    public Book(String bookName, String bookAuthor, String bookId, String bookType, int bookCopy) {
        setBookName(bookName);
        setBookAuthor(bookAuthor);
        setBookId(bookId);
        setBookType(bookType);
        setBookCopy(bookCopy);

        uniqueBookCounter++;
    }

    public Book() {
        uniqueBookCounter++;
    }

    public void setBookName(String bookName) {
        this.bookName = bookName;
    }

    public void setBookAuthor(String bookAuthor) {
        this.bookAuthor = bookAuthor;
    }

    public void setBookId(String bookId) {
        this.bookId = bookId;
    }

    public void setBookType(String bookType) {
        this.bookType = bookType;
    }

    public void setBookCopy(int bookCopy) {
        this.bookCopy = bookCopy;
    }

    public String getBookName() {
        return bookName;
    }

    public String getBookId() {
        return bookId;
    }
    
    public String getBookAuthor() {
        return bookAuthor;
    }

    public String getBookType() {
        return bookType;
    }

    public int getBookCopy() {
        return bookCopy;
    }

    public void showDetails() {
        System.out.println("---------------------------------");
        System.out.println("Name: " + bookName);
        System.out.println("Author: " + bookAuthor);
        System.out.println("ID: " + bookId);
        System.out.println("Type: " + bookType);
        System.out.println("Copy: " + bookCopy);
        System.out.println("---------------------------------");
    }

    public static void totalNumberOfUniqueBooks() {
        System.out.println("Total number of unique books: " + uniqueBookCounter); 
    }


}