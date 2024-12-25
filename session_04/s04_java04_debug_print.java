
class DebugExample {
    private int value;

    DebugExample(int value) {
        System.out.println("DebugExample constructor valled, value = " + value);
        this.value = value;
    }

    public void increment() {
        System.out.println("Calling increment()");
        this.value++;
    }
}

class s04_java04_debug_print {
    public static void main(String[] args) {
        DebugExample d = new DebugExample(5);
        d.increment();
        d.increment();
    }
}