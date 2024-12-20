// Save as: exercise_s1_java5_sol.java
import java.util.Scanner;

public class exercise_s1_java5_sol {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        boolean foundPositive = false;
        for (int i = 0; i < N; i++) {
            int val = sc.nextInt();
            if (val > 0) {
                System.out.println(val);
                foundPositive = true;
            }
        }
        if (!foundPositive) {
            System.out.println("No positive integers.");
        }
    }
}