// Save as: exercise_s3_java2_sol.java
import java.util.Scanner;

public class exercise_s3_java2_sol {
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

        public double getPrice() {
            return price;
        }

        public void setPrice(double p) {
            if (p >= 0.0) {
                this.price = p;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        double p = sc.nextDouble();
        Product prod = new Product(n, p);

        double newPrice = sc.nextDouble(); // e.g., -10
        prod.setPrice(newPrice);

        System.out.println("Final price is: " + prod.getPrice());
    }
}