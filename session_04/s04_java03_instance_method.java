
import java.util.Scanner;

class Rectangle {
    private int width;
    private int height;

    // Constructors
    Rectangle(int w, int h) {
        this.width = w;
        this.height = h;
    }

    // GSetters
    public int get_width() {return this.width;}
    public int get_height() {return this.height;}
    public void set_width(int w) {this.width = w;}
    public void set_height(int h) {this.height = h;}

    // Methods
    public int get_area() {
        return this.width * this.height;
    }
    public int get_perimeter() {
        return 2 * (this.width + this.height);
    }
}

class s04_java03_instance_method {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int width = sc.nextInt();
        int height = sc.nextInt();

        Rectangle r = new Rectangle(width, height);

        System.out.println("Area: " + r.get_area());
        System.out.println("Perimeter: " + r.get_perimeter());
    }
}