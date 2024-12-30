
import java.util.Scanner;
import java.util.ArrayList;

class Product {
    private String name;
    private double price;

    // Constructors
    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    // Getters
    public String getName() {return this.name;}
    public double getPrice() {return this.price;}

    // Setters
    public void setName(String name) {this.name = name;}
    public void setPrice(double price) {this.price = price;}

    // Methods
    public void printInfo() {
        System.out.println("Name: " + this.name + ", Price: " + this.price);
    }
}

public class s05_java04_assignment1_stage1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number_of_products = sc.nextInt();

        ArrayList<Product> products = new ArrayList<>();
        
        for (int i = 0; i < number_of_products; i++) {
            String name = sc.next();
            double price = sc.nextDouble();
            products.add(new Product(name, price));
        }

        for (int i = 0; i < number_of_products; i++) {
            Product p = products.get(i);
            System.out.println("Product: " + p.getName() + ", Price: " + p.getPrice());
        }

        sc.close();
    }
}