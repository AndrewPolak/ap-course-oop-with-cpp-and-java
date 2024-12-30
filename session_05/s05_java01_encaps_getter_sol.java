// Save as: s05_java01_encaps_getter_sol.java
public class s05_java01_encaps_getter_sol {
    static class EncapsTest {
        private int value;

        public EncapsTest() {
            this.value = 0;
        }

        public int getValue() {
            return this.value;
        }

        public void setValue(int v) {
            if (v >= 0) {
                this.value = v;
                System.out.println("Trying to set to " + v + "... OK.");
            } else {
                System.out.println("Trying to set to " + v + "... Rejected.");
            }
        }
    }

    public static void main(String[] args) {
        EncapsTest obj = new EncapsTest();
        obj.setValue(10);
        obj.setValue(-5);
        System.out.println("Final value: " + obj.getValue());
    }
}