// Save as: exercise_s3_java1_sol.java
import java.util.Scanner;

public class exercise_s3_java1_sol {
    // Procedural approach
    public static double applyDiscount(double price, double percent) {
        if (percent > 0 && percent < 100) {
            return price * (1 - percent / 100.0);
        }
        return price;
    }

    // OOP approach
    static class Product {
        String name;
        double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
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

        // Procedural
        double procDiscounted = applyDiscount(price, discount);
        System.out.println("Procedural discounted price: " + procDiscounted);

        // OOP
        Product prod = new Product(name, price);
        prod.applyDiscount(discount);
        System.out.println("OOP discounted price: " + prod.price);
    }
}