// Save as: s04_java03_instance_method_sol.java
import java.util.Scanner;

public class s04_java03_instance_method_sol {
    static class Rectangle {
        private int width;
        private int height;

        public Rectangle(int w, int h) {
            this.width = w;
            this.height = h;
        }

        public int area() {
            return this.width * this.height;
        }

        public int perimeter() {
            return 2 * (this.width + this.height);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        int h = sc.nextInt();
        Rectangle rect = new Rectangle(w, h);
        System.out.println("Area: " + rect.area());
        System.out.println("Perimeter: " + rect.perimeter());
    }
}