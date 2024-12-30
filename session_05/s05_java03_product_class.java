
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

public class s05_java03_product_class {
    public static void main(String[] args) {
        Product p1 = new Product("Apple", 1.2);
        p1.printInfo();
    }
}