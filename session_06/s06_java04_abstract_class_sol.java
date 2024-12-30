// Save as: s06_java04_abstract_class_sol.java
import java.util.ArrayList;

public class s06_java04_abstract_class_sol {
    public static abstract class Product {
        protected String name;
        public Product(String name) {
            this.name = name;
        }
        public abstract void printInfo();
    }

    public static class Book extends Product {
        private String author;
        public Book(String name, String author) {
            super(name);
            this.author = author;
        }
        @Override
        public void printInfo() {
            System.out.println("Book: Title=" + name + ", Author=" + author);
        }
    }

    public static class Movie extends Product {
        private String director;
        public Movie(String name, String director) {
            super(name);
            this.director = director;
        }
        @Override
        public void printInfo() {
            System.out.println("Movie: Title=" + name + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        // can't do new Product() because it's abstract
        ArrayList<Product> items = new ArrayList<>();
        items.add(new Book("1984", "George Orwell"));
        items.add(new Movie("Interstellar", "Christopher Nolan"));

        for(Product p : items) {
            p.printInfo();
        }
    }
}