

public class s06_java02_subclass_methods {
    static class Animal {
        public void makeSound() {
            System.out.println("Some generic animal sound");
        }
    }
    
    static class Dog extends Animal {
        @Override
        public void makeSound() {
            System.out.println("Woof!");
        }
        public void fetch() {
            System.out.println("Dog is fetching a ball!");
        }
    }
    
    public static void main(String[] args) {
        Animal a = new Animal();
        Dog d = new Dog();

        a.makeSound();
        d.makeSound();
        d.fetch();
    }
}
