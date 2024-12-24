// Save as: exercise_s2_java5_sol.java
import java.util.Scanner;

public class exercise_s2_java5_sol {
    public static int multiplyByTwo(int x) {
        System.out.println("Debug: multiplying " + x + " by 2");
        return x * 2;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int val = sc.nextInt();
        System.out.println(multiplyByTwo(val));
    }
}