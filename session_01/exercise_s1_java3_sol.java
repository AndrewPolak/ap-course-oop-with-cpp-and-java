// Save as: exercise_s1_java3_sol.java
import java.util.Scanner;

public class exercise_s1_java3_sol {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int sum = 0;
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
        System.out.println(sum);
    }
}