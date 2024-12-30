// Save as: s05_java05_debug_inspection_sol.java
public class s05_java05_debug_inspection_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            System.out.println("Creating product: " + name + ", " + price);
            this.name = name;
            this.price = price;
        }

        public void setPrice(double newPrice) {
            System.out.println("Changing price from " + this.price + " to " + newPrice);
            if (newPrice >= 0) {
                this.price = newPrice;
            }
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product("Apple", 1.2);
        Product p2 = new Product("Book", 15.0);
        p2.setPrice(10.0);
    }
}