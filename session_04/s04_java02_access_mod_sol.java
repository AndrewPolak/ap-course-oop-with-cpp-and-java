// Save as: s04_java02_access_mod_sol.java
public class s04_java02_access_mod_sol {
    static class SecretBox {
        private int secretNumber;

        public SecretBox(int num) {
            this.secretNumber = num;
        }

        public int revealSecret() {
            return this.secretNumber;
        }
    }

    public static void main(String[] args) {
        SecretBox box = new SecretBox(42);

        // Fails if uncommented: 
        // System.out.println(box.secretNumber);

        System.out.println("The secret number is: " + box.revealSecret());
    }
}