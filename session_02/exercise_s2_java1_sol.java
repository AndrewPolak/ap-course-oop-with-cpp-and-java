// Save as: exercise_s2_java1_sol.java
import java.util.Scanner;

public class exercise_s2_java1_sol {
    public static int maxInt(int a, int b) {
        return (a > b) ? a : b;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(maxInt(a,b));
    }
}