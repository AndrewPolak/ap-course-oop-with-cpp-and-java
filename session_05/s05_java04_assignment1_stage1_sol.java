// Save as: s05_java04_assignment1_stage1_sol.java
import java.util.ArrayList;
import java.util.Scanner;

public class s05_java04_assignment1_stage1_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price: " + price);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Product> products = new ArrayList<>();

        for(int i = 0; i < N; i++) {
            String n = sc.next();
            double p = sc.nextDouble();
            products.add(new Product(n, p));
        }

        for(Product prod : products) {
            prod.printInfo();
        }
    }
}