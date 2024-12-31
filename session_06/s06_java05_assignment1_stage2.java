
import java.util.Scanner;
import java.util.ArrayList;

public class s06_java05_assignment1_stage2 {
    static class Product {
        private String name;
        private double price;

        // Constructors
        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        // Getters
        public String getName() {return this.name;}
        public double getPrice() {return this.price;}

        // Setters
        public void setName(String name) {this.name = name;}
        public void setPrice(double price) {this.price = price;}

        // Methods
        public void printInfo() {
            System.out.println(
                "Product: "
                + "Name=" + this.getName()
                + ", Price=" + this.getPrice()
            );
        }
    }

    static class Book extends Product {
        private String author;

        // Constructors
        public Book(String name, double price, String author) {
            super(name, price);
            this.author = author;
        }

        // Getters
        public String getAuthor() {return this.author;}

        // Setters
        public void setAuthor(String author) {this.author = author;}

        // Methods
        @Override
        public void printInfo() {
            System.out.println(
                "Book: "
                + "Title=" + this.getName()
                + ", Price=" + this.getPrice()
                + ", Author=" + this.getAuthor()
            );
        }
    }

    static class Movie extends Product {
        private String director;

        // Constructors
        public Movie(String name, double price, String director) {
            super(name, price);
            this.director = director;
        }

        // Getters
        public String getDirector() {return this.director;}

        // Setters
        public void setDirector(String director) {this.director = director;}

        // Methods
        @Override
        public void printInfo() {
            System.out.println(
                "Movie: "
                + "Title=" + this.getName()
                + ", Price=" + this.getPrice()
                + ", Director=" + this.getDirector()
            );
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ArrayList<Product> products = new ArrayList<Product>();

        int number_of_products = sc.nextInt();
        for (int i = 0; i < number_of_products; i++) {
            String type = sc.next();
            String name;
            double price;
            String author;
            String director;

            if (type.equals("Book")) {
                name = sc.next();
                price = sc.nextDouble();
                author = sc.next();
                products.add(new Book(name, price, author));
            } else if (type.equals("Movie")) {
                name = sc.next();
                price = sc.nextDouble();
                director = sc.next();
                products.add(new Movie(name, price, director));
            }
        }

        for (int i = 0; i < products.size(); i++) {
            products.get(i).printInfo();
        }

        sc.close();
    }
}