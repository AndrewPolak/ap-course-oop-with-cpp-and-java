// Save as: exercise_s2_java1.java
import java.util.Scanner;

public class exercise_s2_java1 {
    // TODO: Define public static int maxInt(int a, int b)
    public static int maxInt(int a, int b) {
        if (a >= b) {
            return a;
        } else {
            return b;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        // TODO: Call maxInt and print the result

        System.out.println(maxInt(a, b));

        sc.close();
    }
}