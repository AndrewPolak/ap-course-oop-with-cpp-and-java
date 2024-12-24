
import java.util.Scanner;

public class exercise_s3_java3 {
    static class Product {
        // variables
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

        // setters
        public void setName(String name) {this.name = name;}
        public void setPrice(double price) {
            if (price >= 0) this.price = price;
        }

        // methods
        public void applyDiscount(double percent) {
            if (0 <= percent && percent <= 100) {
                this.price *= (100 - percent) / 100;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String name = sc.next();
        double price = sc.nextDouble();
        double discount = sc.nextDouble();

        Product product = new Product(name, price);

        product.applyDiscount(discount);
        System.out.println("Price after " + discount + "% discount: " + product.getPrice());
        
        sc.close();
    }
}