// Save as: exercise_java4.java
import java.util.Scanner;

public class exercise_java4 {
    public static void main(String[] args) {
        // TODO: Create a Scanner, read two integers, compute the sum, and print it.
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println(a + b);
        
        scanner.close();
    }
}