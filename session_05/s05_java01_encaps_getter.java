
class EncapsTest {
    private int value;

    // Constructors
    public EncapsTest() {
        this.value = 0;
    }

    // Getters
    public int getValue() {return this.value;}

    // Setters
    public void setValue(int value) {
        if (value >= 0) {
            this.value = value;
        }
    }
}

public class s05_java01_encaps_getter {
    public static void main(String[] args) {
        EncapsTest et = new EncapsTest();
        attemptSetValue(et, 10);
        attemptSetValue(et, -5);
        System.out.println("Final value: " + et.getValue());
    }

    private static void attemptSetValue(EncapsTest et, int value) {
        et.setValue(value);
        if (et.getValue() == value) {
            System.out.println("Trying to set to " + value + "... OK.");
        } else {
            System.out.println("Trying to set to " + value + "... Rejected.");
        }
    }
}