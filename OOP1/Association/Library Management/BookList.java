public class BookList {
    private Book[] books;

    public BookList () {};

    public BookList(int length) {
        books = new Book[length];
    }

    public boolean insert(Book book) {
        boolean msg = false;

        for (int i = 0; i < books.length; i++) {
            if (books[i] == null) {
                books[i] = book;
                msg = true;
                break;
            }
        }
        return msg;
    }

    public boolean delete(String bookId) {
        boolean msg = false;

        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                if (books[i].getBookId().equals(bookId)) {
                    books[i] = null;
                    msg = true;
                    break;
                }
            }
        }
        return msg;
    }

    public void showAll() {
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                books[i].showDetails();
            }
        }
    }

    public void showABook(String bookId) {
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                if (books[i].getBookId().equals(bookId)) {
                    books[i].showDetails();
                    break;
                }
            }
        }
    }


    public void searchABookByName(String bookName) {
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                if (books[i].getBookName().equals(bookName)) {
                    books[i].showDetails();
                    break;
                }
            }
        }
    }




}