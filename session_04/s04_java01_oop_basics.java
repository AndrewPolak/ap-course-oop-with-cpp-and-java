
public class s04_java01_oop_basics {
    static class Counter {
        private int count;

        public Counter(int c) {
            this.count = c;
        }

        public Counter() {
            this(0);
        }

        public int getCount() {
            return this.count;
        }

        public void increment() {
            this.count++;
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