// Save as: exercise_s2_java4.java
import java.util.Scanner;

public class exercise_s2_java4 {
    static class Item {
        String name;
        double price;
    }
    
    // TODO: Define public static void printItem(Item it)
    public static void printItem(Item it) {
        System.out.println(it.name + " costs " + it.price);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: Create an Item, read name/price, call printItem(it)

        Item it = new Item();
        it.name = sc.next();
        it.price = sc.nextDouble();

        printItem(it);

        sc.close();
    }
}