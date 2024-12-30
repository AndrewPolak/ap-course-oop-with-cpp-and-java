
import java.util.ArrayList;


public class s06_java04_abstract_class {
    static abstract class Product {
        private String title;
    
        public Product(String title) {
            this.title = title;
        }
    
        public String getTitle() {return title;}
    
        public abstract void printInfo();
    }
    
    static class Book extends Product {
        private String author;
    
        public Book(String title, String author) {
            super(title);
            this.author = author;
        }
    
        @Override
        public void printInfo() {
            System.out.println("Product: " + "Title=" + getTitle() + ", Author=" + author);
        }
    }
    
    static class Movie extends Product {
        private String director;
    
        public Movie(String title, String director) {
            super(title);
            this.director = director;
        }
    
        @Override
        public void printInfo() {
            System.out.println("Product: " + "Title=" + getTitle() + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        ArrayList<Product> products = new ArrayList<Product>();

        products.add(new Book("The Hobbit", "J.R.R"));
        products.add(new Movie("Inception", "ChristopherNolan"));

        for (Product p : products) {
            p.printInfo();
        }
    }
}