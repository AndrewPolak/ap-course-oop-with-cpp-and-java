
import java.util.Scanner;

public class exercise_s1_java3 {
    public static void main(String[] args) {
        System.out.print("Enter an integer N (to sum from 1 to N): ");

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;

        System.out.println("Sum: " + sum);
    }
}