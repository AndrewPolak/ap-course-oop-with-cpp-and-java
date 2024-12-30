// Save as: s04_java05_product_class_sol.java
import java.util.Scanner;

public class s04_java05_product_class_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public String getName() {
            return this.name;
        }

        public double getPrice() {
            return this.price;
        }

        public void applyDiscount(double percent) {
            if (percent > 0 && percent < 100) {
                this.price = this.price * (1 - (percent / 100.0));
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();    // e.g. "Book"
        double p = sc.nextDouble(); // e.g. 20
        double d = sc.nextDouble(); // e.g. 25

        Product prod = new Product(n, p);
        prod.applyDiscount(d);

        System.out.println("Discounted price: " + prod.getPrice());
    }
}