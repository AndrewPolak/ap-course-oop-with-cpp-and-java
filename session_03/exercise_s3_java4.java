
public class exercise_s3_java4 {
    static class Product {
        // Variables
        String name;
        double price;

        // Constructors
        Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        Product() {
            this("Unknown", 0.0);
        }

        // Methods
        public void printDetails(int number) {
            System.out.println("Product : " + number + ": " + this.name + ", " + this.price);
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Book", 15.0);

        p1.printDetails(1);
        p2.printDetails(2);
    }
}