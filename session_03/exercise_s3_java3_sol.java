// Save as: exercise_s3_java3_sol.java
import java.util.Scanner;

public class exercise_s3_java3_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public double getPrice() {
            return price;
        }

        public void applyDiscount(double percent) {
            if (percent > 0 && percent < 100) {
                this.price = this.price * (1 - percent / 100.0);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        double price = sc.nextDouble();
        double discount = sc.nextDouble();

        Product prod = new Product(name, price);
        prod.applyDiscount(discount);

        System.out.println("Price after " + discount + "% discount: " + prod.getPrice());
    }
}