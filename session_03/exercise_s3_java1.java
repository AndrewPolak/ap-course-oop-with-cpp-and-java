
import java.util.Scanner;

public class exercise_s3_java1 {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void applyDiscount(double percent) {
            this.price = this.price * (100 - percent) / 100;
        }

        public double getPrice() {
            return this.price;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String name = sc.next();
        double price = sc.nextDouble();
        double percent = sc.nextDouble();

        System.out.println("Procedural discounted price: " + applyDiscount(price, percent));

        Product product = new Product(name, price);
        product.applyDiscount(percent);

        System.out.println("OOP discounted price: " + product.getPrice());

        sc.close();
    }

    static double applyDiscount(double price, double percent) {
        return price * (100 - percent) / 100;
    }
}