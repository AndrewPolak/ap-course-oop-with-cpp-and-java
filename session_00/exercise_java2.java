// Save as: exercise_java2.java
import java.util.Scanner;

public class exercise_java2 {
    public static void main(String[] args) {
        // TODO: Create a Scanner to read from System.in.
        // Prompt the user for their name.
        // Read the name and print "Hello, <name>!"
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello, " + name + "!");
        scanner.close();
    }
}