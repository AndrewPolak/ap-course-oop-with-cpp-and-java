// Save as: exercise_s3_java2.java
import java.util.Scanner;

public class exercise_s3_java2 {
    static class Product {
        // TODO: private fields name, price
        private String name;
        private double price;
        // constructor
        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }
        // getters
        public String getName() {return this.name;}
        public double getPrice() {return this.price;}
        // setPrice
        public void setName(String name) {this.name = name;}
        public void setPrice(double price) {
            if (price >= 0) this.price = price;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read product name, initial price
        String name = sc.next();
        double price = sc.nextDouble();
        // create Product
        Product product = new Product(name, price);
        // setPrice(-10)
        double newPrice = sc.nextDouble();
        product.setPrice(newPrice);
        // print final price
        System.out.println("Final price is: " + product.getPrice());

        sc.close();
    }
}