// Save as: s04_java01_oop_basics_sol.java
public class s04_java01_oop_basics_sol {
    static class Counter {
        private int count;

        public Counter() {
            this.count = 0;
        }

        public void increment() {
            this.count++;
        }

        public int getCount() {
            return this.count;
        }
    }

    public static void main(String[] args) {
        Counter c = new Counter();
        c.increment();
        c.increment();
        c.increment();
        System.out.println("Final count: " + c.getCount());
    }
}