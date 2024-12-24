
public class exercise_s3_java5 {
    static class Product {
        // Variables
        private String name;
        private double price;

        // Constructors
        Product(String name, double price) {
            System.out.println("Parameterized constructor called");
            this.name = name;
            this.price = price;
        }

        Product() {
            this("Unknown", 0.0);
            System.out.println("Default constructor called");
        }

        // Getters
        public String getName() {return this.name;}
        public double getPrice() {return this.price;}

        // Setters
        void setName(String name) {this.name = name;}
        void setPrice(double price) {
            System.out.println("set_price() called with: " + price);
            if (price >= 0) {
                this.price = price;
            }
        }

        // Methods
        void printDetails() {
            System.out.println("Error: printDetails() not implemented");
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Book", 3.50);

        p2.setPrice(0);

        p1.printDetails();
        p2.printDetails();
    }
}