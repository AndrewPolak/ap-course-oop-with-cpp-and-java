// Save as: exercise_s3_java4_sol.java
public class exercise_s3_java4_sol {
    static class Product {
        private String name;
        private double price;

        // Default constructor
        public Product() {
            this.name = "Unknown";
            this.price = 0.0;
        }

        // Parameterized constructor
        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public String getName() {
            return this.name;
        }

        public double getPrice() {
            return this.price;
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Book", 15.0);

        System.out.println("Product 1: " + p1.getName() + ", " + p1.getPrice());
        System.out.println("Product 2: " + p2.getName() + ", " + p2.getPrice());
    }
}