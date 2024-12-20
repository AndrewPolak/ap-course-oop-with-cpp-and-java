
import java.util.Scanner;

public class exercise_s1_java4 {
    public static void main(String[] args) {
        int secret = 7;

        System.out.print("Guess the number: ");
        Scanner sc = new Scanner(System.in);
        int guess = sc.nextInt();

        while (guess != secret) {
            System.out.print("Guess again: ");
            guess = sc.nextInt();
        }

        System.out.println("Correct!");
    }
}