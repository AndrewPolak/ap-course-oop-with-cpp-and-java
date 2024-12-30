// Save as: s06_java02_subclass_method_sol.java
public class s06_java02_subclass_method_sol {
    static class Animal {
        public void makeSound() {
            System.out.println("Some generic animal sound");
        }
    }

    static class Dog extends Animal {
        @Override
        public void makeSound() {
            System.out.println("Woof");
        }
        public void fetch() {
            System.out.println("Dog is fetching a ball");
        }
    }

    public static void main(String[] args) {
        Dog d = new Dog();
        d.makeSound(); // Woof
        d.fetch();     // Dog is fetching a ball

        // Animal a = new Dog();
        // a.makeSound(); // Woof
        // a.fetch(); // won't compile, not in Animal
    }
}