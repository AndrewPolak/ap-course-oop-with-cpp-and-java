// Save as: s05_java03_product_class_sol.java
import java.util.Scanner;

public class s05_java03_product_class_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public double getPrice() {
            return price;
        }

        public void setPrice(double p) {
            if (p >= 0) {
                this.price = p;
            }
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price: " + price);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();   // e.g. Apple
        double p = sc.nextDouble(); // e.g. 1.2
        Product prod = new Product(n, p);
        prod.printInfo();
    }
}