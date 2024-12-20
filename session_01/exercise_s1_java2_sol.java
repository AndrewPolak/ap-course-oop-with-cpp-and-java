// Save as: exercise_s1_java2_sol.java
import java.util.Scanner;

public class exercise_s1_java2_sol {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n % 2 == 0) {
            System.out.println("Even");
        } else {
            System.out.println("Odd");
        }
    }
}