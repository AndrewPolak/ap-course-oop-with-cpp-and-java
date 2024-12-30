// Save as: s04_java04_debug_print_sol.java
public class s04_java04_debug_print_sol {
    static class DebugExample {
        private int value;

        public DebugExample(int val) {
            System.out.println("DebugExample constructor called, value = " + val);
            this.value = val;
        }

        public void incrementValue() {
            System.out.println("incrementValue called, current value = " + this.value);
            this.value++;
        }
    }

    public static void main(String[] args) {
        DebugExample dbg = new DebugExample(5);
        dbg.incrementValue();
        dbg.incrementValue();
        dbg.incrementValue();
    }
}