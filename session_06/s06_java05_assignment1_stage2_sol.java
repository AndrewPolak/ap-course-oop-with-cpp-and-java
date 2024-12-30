// Save as: s06_java05_assignment1_stage2_sol.java
import java.util.ArrayList;
import java.util.Scanner;

public class s06_java05_assignment1_stage2_sol {
    // Base class
    static class Product {
        protected String name;
        protected double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price=" + price);
        }
    }

    // Subclass Book
    static class Book extends Product {
        private String author;
        public Book(String name, double price, String author) {
            super(name, price);
            this.author = author;
        }
        @Override
        public void printInfo() {
            System.out.println("Book: Title=" + name + ", Price=" + price 
                + ", Author=" + author);
        }
    }

    // Subclass Movie
    static class Movie extends Product {
        private String director;
        public Movie(String name, double price, String director) {
            super(name, price);
            this.director = director;
        }
        @Override
        public void printInfo() {
            System.out.println("Movie: Title=" + name + ", Price=" + price 
                + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); // e.g. 3
        ArrayList<Product> products = new ArrayList<>(N);

        for(int i = 0; i < N; i++) {
            String type = sc.next();   // Book or Movie
            String n = sc.next();      // e.g. TheHobbit
            double p = sc.nextDouble();// e.g. 10.0
            String extra = sc.next();  // e.g. Tolkien

            if(type.equals("Book")) {
                products.add(new Book(n, p, extra));
            } else if(type.equals("Movie")) {
                products.add(new Movie(n, p, extra));
            } else {
                // unknown type
            }
        }

        // Print them all
        for(Product prod : products) {
            prod.printInfo();
        }
    }
}