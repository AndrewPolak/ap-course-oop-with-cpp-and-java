// Save as: exercise_s2_java3_sol.java
import java.util.Scanner;

public class exercise_s2_java3_sol {
    static class Item {
        String name;
        double price;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Item it = new Item();
        it.name = sc.next();
        it.price = sc.nextDouble();
        System.out.println(it.name + " costs " + it.price);
    }
}