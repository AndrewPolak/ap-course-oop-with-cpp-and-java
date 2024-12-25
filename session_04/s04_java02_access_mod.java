
class SecretBox {
    private int secret_number;

    public SecretBox(int s) {
        this.secret_number = s;
    }

    public int reveal_secret() {
        return this.secret_number;
    }
}


public class s04_java02_access_mod {
    // static class SecretBox {
    //     private int secret_number;

    //     public SecretBox(int s) {
    //         this.secret_number = s;
    //     }

    //     public int reveal_secret() {
    //         return this.secret_number;
    //     }
    // }

    public static void main(String[] args) {
        SecretBox sb = new SecretBox(7);

        int secret_number;
        // secret_number = sb.secret_number;
        secret_number = sb.reveal_secret();

        System.out.println("The secret number is: " + secret_number);
    }
}