// Save as: s06_java03_polymorph_list_sol.java
import java.util.ArrayList;

public class s06_java03_polymorph_list_sol {
    static class Product {
        protected String name;
        public Product(String name) {
            this.name = name;
        }
        public void printInfo() {
            System.out.println("Product: " + name);
        }
    }

    static class Book extends Product {
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

    static class Movie extends Product {
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
        ArrayList<Product> items = new ArrayList<>();
        items.add(new Book("The Hobbit", "J.R.R. Tolkien"));
        items.add(new Movie("Inception", "Christopher Nolan"));

        for(Product p : items) {
            p.printInfo();
        }
    }
}