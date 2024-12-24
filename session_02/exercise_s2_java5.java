
import java.util.Scanner;

public class exercise_s2_java5 {
    public static int multiplyByTwo(int x) {
        System.out.println("Debug: multiplying " + x + " by 2.");
        return 2 * x;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        System.out.println(multiplyByTwo(x));

        sc.close();
    }
}