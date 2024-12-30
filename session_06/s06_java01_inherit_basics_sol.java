// Save as: s06_java01_inherit_basics_sol.java
public class s06_java01_inherit_basics_sol {
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
    }

    public static void main(String[] args) {
        Animal a = new Animal();
        Dog d = new Dog();

        a.makeSound(); // Some generic animal sound
        d.makeSound(); // Woof
    }
}