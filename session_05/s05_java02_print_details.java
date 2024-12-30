
class User {
    private String username;
    private int age;

    public User(String username, int age) {
        this.username = username;
        this.age = age;
    }

    public void printInfo() {
        System.out.println("User: " + this.username + ", Age: " + this.age);
    }
}

public class s05_java02_print_details {
    public static void main(String[] args) {
        User u1 = new User("alice", 30);
        User u2 = new User("bob", 25);
        u1.printInfo();
        u2.printInfo();
    }
}