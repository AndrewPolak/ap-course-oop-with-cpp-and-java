
import java.util.Scanner;

class Item {
    String name;
    double price;
}

public class exercise_s2_java3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Item it = new Item();
        it.name = sc.next();
        it.price = sc.nextDouble();

        System.out.println(it.name + " costs " + it.price);

        sc.close();
    }
}