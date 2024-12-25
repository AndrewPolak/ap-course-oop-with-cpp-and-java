
import java.util.Scanner;

class Product {
    private String name;
    private double price;

    // Constructor
    Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    // Getters
    public String getName() {return this.name;}
    public double getPrice() {return this.price;}

    // Setters

    // Methods
    public void applyDiscount(double percent) {
        if (0 <= percent && percent <= 100) {
            this.price *= (100 - percent) / 100;
        }
    }
}

class s04_java05_product_class {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String name = sc.next();
        double price = sc.nextDouble();
        double discount = sc.nextDouble();

        Product p = new Product(name, price);
        p.applyDiscount(discount);

        System.out.println("Discounted price: " + p.getPrice());

        sc.close();
    }
}