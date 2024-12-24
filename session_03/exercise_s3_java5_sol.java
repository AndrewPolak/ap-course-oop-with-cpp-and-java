// Save as: exercise_s3_java5_sol.java
public class exercise_s3_java5_sol {
    static class Product {
        private String name;
        private double price;

        public Product() {
            System.out.println("Default constructor called");
            this.name = "Unknown";
            this.price = 0.0;
        }

        public Product(String name, double price) {
            System.out.println("Parameterized constructor called");
            this.name = name;
            this.price = price;
        }

        public void setPrice(double newPrice) {
            System.out.println("setPrice called with: " + newPrice);
            if (newPrice >= 0.0) {
                this.price = newPrice;
            }
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Phone", 100.0);
        p2.setPrice(20.0);
    }
}