import java.util.Scanner;

public class exercise_s1_java5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int number_of_positive_inputs = 0 ;
        for (int i = 0; i < n; i++) {
            int number = sc.nextInt();
            if (number > 0) {
                System.out.println(number);
                number_of_positive_inputs++;
            }
        }

        if (number_of_positive_inputs == 0) {
            System.out.println("No positive integers.");
        }
        
        sc.close();
    }
}