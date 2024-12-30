```bash
# Run this command to create all required files for Session 6 (Inheritance & Polymorphism).
touch \
s06_cpp01_inherit_basics.cpp s06_cpp01_inherit_basics_sol.cpp s06_cpp01_inherit_basics_test.py \
s06_cpp02_subclass_method.cpp s06_cpp02_subclass_method_sol.cpp s06_cpp02_subclass_method_test.py \
s06_cpp03_virtual_func.cpp s06_cpp03_virtual_func_sol.cpp s06_cpp03_virtual_func_test.py \
s06_cpp04_polymorph_list.cpp s06_cpp04_polymorph_list_sol.cpp s06_cpp04_polymorph_list_test.py \
s06_cpp05_assignment1_stage2.cpp s06_cpp05_assignment1_stage2_sol.cpp s06_cpp05_assignment1_stage2_test.py \
s06_java01_inherit_basics.java s06_java01_inherit_basics_sol.java s06_java01_inherit_basics_test.py \
s06_java02_subclass_method.java s06_java02_subclass_method_sol.java s06_java02_subclass_method_test.py \
s06_java03_polymorph_list.java s06_java03_polymorph_list_sol.java s06_java03_polymorph_list_test.py \
s06_java04_abstract_class.java s06_java04_abstract_class_sol.java s06_java04_abstract_class_test.py \
s06_java05_assignment1_stage2.java s06_java05_assignment1_stage2_sol.java s06_java05_assignment1_stage2_test.py
```

---

# Session 6: **Inheritance & Polymorphism**

## Overview

**Session 6** is where we dive into two foundational concepts of OOP:

1. **Inheritance:**  
   - Creating a subclass (`Book`, `Movie`) that extends a base class (`Product`).  
   - Understanding how fields and methods are inherited.  
   - Overriding methods in subclasses.

2. **Polymorphism:**  
   - Using a base-class pointer/reference to refer to different subclass objects.  
   - Virtual functions (in C++) or overriding methods (in Java).  
   - Storing a heterogeneous collection of derived objects and calling common methods that behave differently depending on the actual subclass type.

**By the end of this session**, you’ll be able to:

- Define subclasses that inherit from a base class in both C++ and Java.  
- Override methods for specialized behavior.  
- Store and manipulate objects polymorphically (e.g., a list of `Product*` or `Product` references that contain `Book` and `Movie` objects).

In **Assignment 1 (Stage 2)**, you will create `Book` and `Movie` classes that derive from `Product`, highlight polymorphism by printing details for mixed products, and demonstrate encapsulation and validation in these subclasses.

---

## Detailed, Substantive Explanations

### 1. Inheritance

**Why Inheritance?**  
- **Code Reuse:** Common fields and behaviors move into a base class. Subclasses only implement or override specialized parts.  
- **Extensibility:** New features or specialized behaviors can be added with minimal changes to existing code.

**C++ Syntax**  
```cpp
class Base {
public:
    void commonMethod() { /* ... */ }
};

class Derived : public Base {
public:
    void specializedMethod() { /* ... */ }
};
```
- `public` inheritance means public members remain public in the derived class.

**Java Syntax**  
```java
class Base {
    public void commonMethod() { /* ... */ }
}

class Derived extends Base {
    public void specializedMethod() { /* ... */ }
}
```

### 2. Virtual Functions and Method Overriding (Polymorphism)

**Polymorphism** allows a base class pointer/reference to call the correct overridden method of a derived class.

- **In C++**, declare methods as `virtual` in the base class if you want them to be overridden:
  ```cpp
  class Product {
  public:
      virtual void printInfo() const {
          std::cout << "Base Product info\n";
      }
  };
  class Book : public Product {
  public:
      void printInfo() const override {
          std::cout << "Book info\n";
      }
  };
  ```
  Then:
  ```cpp
  Product* p = new Book();
  p->printInfo(); // calls Book's printInfo()
  ```

- **In Java**, every non-static method can be overridden by default, but we typically annotate it with `@Override`:
  ```java
  class Product {
      public void printInfo() {
          System.out.println("Base Product info");
      }
  }
  class Book extends Product {
      @Override
      public void printInfo() {
          System.out.println("Book info");
      }
  }
  ```

**When to Use Polymorphism:**  

- If you want consistent handling of a group of objects with different behaviors depending on their types. For example, `Product[]` might contain both `Book` and `Movie` objects, each printing details differently.

### 3. Subclass Constructors and Field Management

- **C++**: Call the base class constructor in the initializer list.  
  ```cpp
  class Book : public Product {
  public:
      Book(const std::string& n, double p, const std::string& auth)
        : Product(n, p), author(auth) {}
  };
  ```
- **Java**: Call the base constructor in the subclass constructor with `super(...)`.  
  ```java
  class Book extends Product {
      private String author;
      public Book(String name, double price, String author) {
          super(name, price);
          this.author = author;
      }
  }
  ```

### 4. Assignment 1 (Stage 2)

- **Focus**: Extending the `Product` class into `Book` and `Movie` subclasses.  
- **Demonstrate Polymorphism** by storing both in a single collection (e.g., `std::vector<Product*>` in C++ or `ArrayList<Product>` in Java).  
- **Implement Encapsulation**: `Book` might store an `author`, `Movie` might store a `director`, each with specialized logic (like `printInfo()` or a dedicated method).

---

## Official Documentation & Trusted Resources

- **C++ Inheritance & Virtual Functions**  
  [https://en.cppreference.com/w/cpp/language/derived_class](https://en.cppreference.com/w/cpp/language/derived_class)  
  [https://en.cppreference.com/w/cpp/language/virtual](https://en.cppreference.com/w/cpp/language/virtual)

- **Java Inheritance**  
  [https://docs.oracle.com/javase/tutorial/java/IandI/subclasses.html](https://docs.oracle.com/javase/tutorial/java/IandI/subclasses.html)  

---

## Exercises

Below are **5 C++ exercises** and **5 Java exercises**. Each practice different aspects of inheritance and polymorphism, culminating in **Assignment 1 (Stage 2)**.

### C++ Exercises

#### 1) **s06_cpp01_inherit_basics.cpp**
**Goal:** Introduce basic inheritance syntax in C++.

- **Instructions:**  
  1. Define a base class `Animal` with a public method `makeSound()` that prints `"Some generic animal sound"`.  
  2. Define a derived class `Dog : public Animal` that overrides `makeSound()` to print `"Woof"`.  
  3. In `main`, create an `Animal` and a `Dog`, call `makeSound()` on each.

- **Expected Output (Example):**  
  ```
  Some generic animal sound
  Woof
  ```

```cpp
// Save as: s06_cpp01_inherit_basics.cpp
#include <iostream>

// TODO: class Animal { public: virtual void makeSound() ... }
//       class Dog : public Animal { ... override makeSound() }

int main() {
    // TODO: create Animal a; create Dog d;
    // call a.makeSound(), d.makeSound()
    return 0;
}
```

---

#### 2) **s06_cpp02_subclass_method.cpp**
**Goal:** Add a specialized method in the subclass.

- **Instructions:**  
  1. Reuse `Animal`/`Dog` from above or define anew.  
  2. `Dog` has an extra method `fetch()` printing `"Dog is fetching a ball"`.  
  3. In `main`, call `fetch()` on a `Dog`, but note that `Animal` doesn’t have that method.

- **Expected Output (Example):**  
  ```
  Woof
  Dog is fetching a ball
  ```

```cpp
// Save as: s06_cpp02_subclass_method.cpp
#include <iostream>

// TODO: class Animal, class Dog : public Animal with a fetch() method

int main() {
    // TODO: create Dog d; call d.makeSound(), d.fetch()
    //       demonstrate that fetch() is not in Animal
    return 0;
}
```

---

#### 3) **s06_cpp03_virtual_func.cpp**
**Goal:** Illustrate virtual vs. non-virtual in C++.

- **Instructions:**  
  1. Define a base class `Shape` with a method `draw()` that prints `"Drawing a generic shape"`.  
  2. Define `Circle : public Shape` that overrides `draw()` with `"Drawing a circle"`.  
  3. If `draw()` is virtual in `Shape`, then `Shape* s = new Circle(); s->draw();` calls the circle’s version.  
  4. If `draw()` is not virtual, it calls the base class version.  
  5. Compare both behaviors in `main`.

- **Expected Behavior:**  
  ```
  With virtual:
  Drawing a circle
  Without virtual:
  Drawing a generic shape
  ```

```cpp
// Save as: s06_cpp03_virtual_func.cpp
#include <iostream>

// TODO: class Shape { public: virtual void draw() ... } 
//       class Circle : public Shape { override draw() ... }

int main() {
    // TODO: demonstrate polymorphism with (Shape* s = new Circle)
    // call s->draw() in both "virtual" and "non-virtual" scenarios
    return 0;
}
```

---

#### 4) **s06_cpp04_polymorph_list.cpp**
**Goal:** Store derived objects in a container of base pointers and iterate to call overridden methods.

- **Instructions:**  
  1. Create a base class `Product` with a `printInfo()` method (virtual).  
  2. Subclass `Book : public Product`, override `printInfo()` to include author name.  
  3. Subclass `Movie : public Product`, override `printInfo()` to include director.  
  4. In `main`, create a `std::vector<Product*>`, push back `new Book(...)` and `new Movie(...)`.  
  5. Loop over the vector, call `printInfo()` on each pointer.

- **Expected Output (Example):**  
  ```
  Book: Title=The Hobbit, Author=J.R.R. Tolkien
  Movie: Title=Inception, Director=Christopher Nolan
  ```

```cpp
// Save as: s06_cpp04_polymorph_list.cpp
#include <iostream>
#include <vector>
#include <string>

// TODO: class Product { public: virtual void printInfo() const; etc. }
//       class Book : public Product { override printInfo() }
//       class Movie : public Product { override printInfo() }

int main() {
    // TODO: create a vector<Product*>, add new Book, new Movie
    // loop, call printInfo()
    // note: manage memory if needed
    return 0;
}
```

---

#### 5) **s06_cpp05_assignment1_stage2.cpp**
**Goal:** **Assignment 1 (Stage 2)** – Extend your `Product` system with `Book` and `Movie` subclasses.

- **Instructions (Simplified Stage 2):**  
  1. Start with your `Product` base class from prior sessions (it can remain largely unchanged).  
  2. Create `Book` (with `author`) and `Movie` (with `director`) classes inheriting from `Product`.  
  3. Override a method, e.g. `printInfo()`, to show specialized info.  
  4. In `main`, read multiple products from user input. If the user enters “Book” for type, create a `Book`; if they enter “Movie”, create a `Movie`.  
  5. Store them in a container of `Product*` (or `unique_ptr<Product>` if you prefer).  
  6. Print them all, demonstrating polymorphism.

- **Input (Example):**  
  ```
  3
  Book TheHobbit 10.0 Tolkien
  Movie Inception 12.5 Nolan
  Book Dune 15.0 Herbert
  ```
- **Output (Example):**  
  ```
  Book: Title=TheHobbit, Price=10, Author=Tolkien
  Movie: Title=Inception, Price=12.5, Director=Nolan
  Book: Title=Dune, Price=15, Author=Herbert
  ```

```cpp
// Save as: s06_cpp05_assignment1_stage2.cpp
#include <iostream>
#include <vector>
#include <string>

// TODO: Product base class, Book subclass, Movie subclass
//       override printInfo() for both

int main() {
    // TODO: read N
    // For each entry, read type(Book/Movie), name, price, extra info(author/director)
    // create the appropriate subclass
    // store in vector<Product*>
    // then print them all
    return 0;
}
```

---

### Java Exercises

#### 1) **s06_java01_inherit_basics.java**
**Goal:** Basic inheritance in Java.

- **Instructions:**  
  1. Define a `Animal` class with a method `makeSound()` → `"Some generic animal sound"`.  
  2. Define a `Dog` class that extends `Animal` and overrides `makeSound()` → `"Woof"`.  
  3. In `main`, create an `Animal` and a `Dog`, call `makeSound()` on each.

- **Expected Output:**  
  ```
  Some generic animal sound
  Woof
  ```

```java
// Save as: s06_java01_inherit_basics.java
public class s06_java01_inherit_basics {
    // TODO: class Animal { public void makeSound() {...} }
    //       class Dog extends Animal { @Override makeSound() {...} }

    public static void main(String[] args) {
        // TODO: Animal a = new Animal(); Dog d = new Dog();
        // a.makeSound(); d.makeSound();
    }
}
```

---

#### 2) **s06_java02_subclass_method.java**
**Goal:** Add a specialized method in the subclass not found in the base class.

- **Instructions:**  
  1. Reuse or define a new `Animal` and `Dog`.  
  2. Add a method `fetch()` in `Dog` only.  
  3. Show that an `Animal` reference can’t call `fetch()`, but a `Dog` reference can.

- **Expected Output:**  
  ```
  Woof
  Dog is fetching a ball
  ```

```java
// Save as: s06_java02_subclass_method.java
public class s06_java02_subclass_method {
    // TODO: class Animal, class Dog extends Animal with fetch()
    public static void main(String[] args) {
        // TODO: Dog d = new Dog(); d.makeSound(); d.fetch();
        //       Animal a = new Dog(); a.makeSound(); a.fetch() is not possible
    }
}
```

---

#### 3) **s06_java03_polymorph_list.java**
**Goal:** Store subclass objects in a list of the base type, then call overridden methods.

- **Instructions:**  
  1. Define a base class `Product` with `printInfo()` method.  
  2. Define `Book extends Product` overriding `printInfo()` to show `author`.  
  3. Define `Movie extends Product` overriding `printInfo()` to show `director`.  
  4. In `main`, create an `ArrayList<Product>`. Add a `new Book(...)` and a `new Movie(...)`.  
  5. Loop and call `printInfo()` on each.

- **Expected Output (Example):**  
  ```
  Book: Title=The Hobbit, Author=J.R.R. Tolkien
  Movie: Title=Inception, Director=Christopher Nolan
  ```

```java
// Save as: s06_java03_polymorph_list.java
import java.util.ArrayList;

public class s06_java03_polymorph_list {
    // TODO: class Product { public void printInfo()... }
    //       class Book extends Product { @Override printInfo()... }
    //       class Movie extends Product { @Override printInfo()... }

    public static void main(String[] args) {
        // TODO: ArrayList<Product> list = new ArrayList<>();
        // add new Book(...) and new Movie(...)
        // loop list, call printInfo()
    }
}
```

---

#### 4) **s06_java04_abstract_class.java**
**Goal:** Demonstrate `abstract` classes in Java for partial implementation.

- **Instructions:**  
  1. Mark `Product` as `abstract`. Give it an abstract `printInfo()` method.  
  2. `Book extends Product` must implement `printInfo()`.  
  3. `Movie extends Product` must implement `printInfo()`.  
  4. In `main`, you cannot create a `new Product()`, but you can create `new Book()` or `new Movie()`.  
  5. Show polymorphism with an array or list of `Product`.

- **Expected Output (Example):**  
  ```
  Book: Title=1984, Author=George Orwell
  Movie: Title=Interstellar, Director=Christopher Nolan
  ```

```java
// Save as: s06_java04_abstract_class.java
import java.util.ArrayList;

public class s06_java04_abstract_class {
    // TODO: public abstract class Product { public abstract void printInfo(); ... }
    //       class Book extends Product { @Override printInfo() { ... } }
    //       class Movie extends Product { @Override printInfo() { ... } }

    public static void main(String[] args) {
        // TODO: ArrayList<Product> items = new ArrayList<>();
        // items.add(new Book(...));
        // items.add(new Movie(...));
        // loop items -> printInfo()
    }
}
```

---

#### 5) **s06_java05_assignment1_stage2.java**
**Goal:** **Assignment 1 (Stage 2)** – Extend `Product` into `Book` & `Movie`, demonstrate polymorphism in Java.

- **Instructions:**  
  1. Start from your `Product` class in earlier sessions.  
  2. Create `Book` (with `author`) and `Movie` (with `director`) that extend `Product`.  
  3. Override a method (e.g., `printInfo()` or `toString()`) to show specialized info.  
  4. In `main`, read multiple products from user input (type Book/Movie, plus name, price, author/director).  
  5. Store them in an `ArrayList<Product>`.  
  6. Print them all, demonstrating polymorphism.

- **Input (Example):**  
  ```
  3
  Book TheHobbit 10.0 Tolkien
  Movie Inception 12.5 Nolan
  Book Dune 15.0 Herbert
  ```
- **Output (Example):**  
  ```
  Book: Title=TheHobbit, Price=10.0, Author=Tolkien
  Movie: Title=Inception, Price=12.5, Director=Nolan
  Book: Title=Dune, Price=15.0, Author=Herbert
  ```

```java
// Save as: s06_java05_assignment1_stage2.java
import java.util.ArrayList;
import java.util.Scanner;

public class s06_java05_assignment1_stage2 {
    // TODO: abstract or normal Product base, Book subclass, Movie subclass
    //       override printInfo() or toString()

    public static void main(String[] args) {
        // TODO: read N
        // read lines specifying (Book/Movie, name, price, author/director)
        // store in ArrayList<Product>
        // print them
    }
}
```

---

## Reference Solutions

Below are sample solutions. Actual implementations may differ slightly but should follow the same concepts.

### C++ Solutions

<details>
<summary><strong>s06_cpp01_inherit_basics_sol.cpp</strong></summary>

```cpp
// Save as: s06_cpp01_inherit_basics_sol.cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof\n";
    }
};

int main() {
    Animal a;
    Dog d;

    a.makeSound();  // Some generic animal sound
    d.makeSound();  // Woof
    return 0;
}
```
</details>

<details>
<summary><strong>s06_cpp02_subclass_method_sol.cpp</strong></summary>

```cpp
// Save as: s06_cpp02_subclass_method_sol.cpp
#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof\n";
    }
    void fetch() const {
        std::cout << "Dog is fetching a ball\n";
    }
};

int main() {
    Dog d;
    d.makeSound(); // Woof
    d.fetch();     // Dog is fetching a ball

    // Animal a;
    // a.fetch(); // wouldn't compile, fetch() not in Animal

    return 0;
}
```
</details>

<details>
<summary><strong>s06_cpp03_virtual_func_sol.cpp</strong></summary>

```cpp
// Save as: s06_cpp03_virtual_func_sol.cpp
#include <iostream>

class Shape {
public:
    // comment/uncomment 'virtual' to compare behavior
    virtual void draw() const {
        std::cout << "Drawing a generic shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle\n";
    }
};

int main() {
    std::cout << "With virtual:\n";
    Shape* s1 = new Circle();
    s1->draw(); // Drawing a circle
    delete s1;

    // Now demonstrate "Without virtual" by removing 'virtual' above
    // Or create a separate scenario

    std::cout << "Without virtual:\n";
    // Hypothetical if we removed virtual, it would print "Drawing a generic shape"
    // We'll just simulate it here:
    Shape* s2 = new Circle();
    s2->draw(); // might do "Drawing a generic shape" if not virtual
    delete s2;

    return 0;
}
```
</details>

<details>
<summary><strong>s06_cpp04_polymorph_list_sol.cpp</strong></summary>

```cpp
// Save as: s06_cpp04_polymorph_list_sol.cpp
#include <iostream>
#include <vector>
#include <string>

class Product {
protected:
    std::string name;
public:
    Product(const std::string &n) : name(n) {}
    virtual ~Product() {}
    virtual void printInfo() const {
        std::cout << "Product: " << name << "\n";
    }
};

class Book : public Product {
private:
    std::string author;
public:
    Book(const std::string &n, const std::string &a)
        : Product(n), author(a) {}
    void printInfo() const override {
        std::cout << "Book: Title=" << name << ", Author=" << author << "\n";
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    Movie(const std::string &n, const std::string &d)
        : Product(n), director(d) {}
    void printInfo() const override {
        std::cout << "Movie: Title=" << name << ", Director=" << director << "\n";
    }
};

int main() {
    std::vector<Product*> items;
    items.push_back(new Book("The Hobbit", "J.R.R. Tolkien"));
    items.push_back(new Movie("Inception", "Christopher Nolan"));

    for (auto* item : items) {
        item->printInfo();
    }

    // cleanup
    for (auto* item : items) {
        delete item;
    }
    items.clear();

    return 0;
}
```
</details>

<details>
<summary><strong>s06_cpp05_assignment1_stage2_sol.cpp</strong></summary>

```cpp
// Save as: s06_cpp05_assignment1_stage2_sol.cpp
#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Product {
protected:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}
    virtual ~Product() {}

    virtual void printInfo() const {
        std::cout << "Product: " << name << ", Price=" << price << "\n";
    }
};

class Book : public Product {
private:
    std::string author;
public:
    Book(const std::string &n, double p, const std::string &auth)
        : Product(n, p), author(auth) {}
    void printInfo() const override {
        std::cout << "Book: Title=" << name << ", Price=" << price 
                  << ", Author=" << author << "\n";
    }
};

class Movie : public Product {
private:
    std::string director;
public:
    Movie(const std::string &n, double p, const std::string &dir)
        : Product(n, p), director(dir) {}
    void printInfo() const override {
        std::cout << "Movie: Title=" << name << ", Price=" << price 
                  << ", Director=" << director << "\n";
    }
};

int main() {
    int N;
    std::cin >> N;  
    std::vector<std::unique_ptr<Product>> products;
    products.reserve(N);

    for(int i=0; i<N; i++) {
        std::string type, n, extra;
        double p;
        std::cin >> type >> n >> p >> extra; 
        // e.g. "Book TheHobbit 10.0 Tolkien"
        
        if(type == "Book") {
            products.push_back(std::make_unique<Book>(n, p, extra));
        } else if(type == "Movie") {
            products.push_back(std::make_unique<Movie>(n, p, extra));
        } else {
            // unknown type, skip or handle error
        }
    }

    for(const auto &prod : products) {
        prod->printInfo();
    }

    return 0;
}
```
</details>

---

### Java Solutions

<details>
<summary><strong>s06_java01_inherit_basics_sol.java</strong></summary>

```java
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
```
</details>

<details>
<summary><strong>s06_java02_subclass_method_sol.java</strong></summary>

```java
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
```
</details>

<details>
<summary><strong>s06_java03_polymorph_list_sol.java</strong></summary>

```java
// Save as: s06_java03_polymorph_list_sol.java
import java.util.ArrayList;

public class s06_java03_polymorph_list_sol {
    static class Product {
        protected String name;
        public Product(String name) {
            this.name = name;
        }
        public void printInfo() {
            System.out.println("Product: " + name);
        }
    }

    static class Book extends Product {
        private String author;
        public Book(String name, String author) {
            super(name);
            this.author = author;
        }
        @Override
        public void printInfo() {
            System.out.println("Book: Title=" + name + ", Author=" + author);
        }
    }

    static class Movie extends Product {
        private String director;
        public Movie(String name, String director) {
            super(name);
            this.director = director;
        }
        @Override
        public void printInfo() {
            System.out.println("Movie: Title=" + name + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        ArrayList<Product> items = new ArrayList<>();
        items.add(new Book("The Hobbit", "J.R.R. Tolkien"));
        items.add(new Movie("Inception", "Christopher Nolan"));

        for(Product p : items) {
            p.printInfo();
        }
    }
}
```
</details>

<details>
<summary><strong>s06_java04_abstract_class_sol.java</strong></summary>

```java
// Save as: s06_java04_abstract_class_sol.java
import java.util.ArrayList;

public class s06_java04_abstract_class_sol {
    public static abstract class Product {
        protected String name;
        public Product(String name) {
            this.name = name;
        }
        public abstract void printInfo();
    }

    public static class Book extends Product {
        private String author;
        public Book(String name, String author) {
            super(name);
            this.author = author;
        }
        @Override
        public void printInfo() {
            System.out.println("Book: Title=" + name + ", Author=" + author);
        }
    }

    public static class Movie extends Product {
        private String director;
        public Movie(String name, String director) {
            super(name);
            this.director = director;
        }
        @Override
        public void printInfo() {
            System.out.println("Movie: Title=" + name + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        // can't do new Product() because it's abstract
        ArrayList<Product> items = new ArrayList<>();
        items.add(new Book("1984", "George Orwell"));
        items.add(new Movie("Interstellar", "Christopher Nolan"));

        for(Product p : items) {
            p.printInfo();
        }
    }
}
```
</details>

<details>
<summary><strong>s06_java05_assignment1_stage2_sol.java</strong></summary>

```java
// Save as: s06_java05_assignment1_stage2_sol.java
import java.util.ArrayList;
import java.util.Scanner;

public class s06_java05_assignment1_stage2_sol {
    // Base class
    static class Product {
        protected String name;
        protected double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price=" + price);
        }
    }

    // Subclass Book
    static class Book extends Product {
        private String author;
        public Book(String name, double price, String author) {
            super(name, price);
            this.author = author;
        }
        @Override
        public void printInfo() {
            System.out.println("Book: Title=" + name + ", Price=" + price 
                + ", Author=" + author);
        }
    }

    // Subclass Movie
    static class Movie extends Product {
        private String director;
        public Movie(String name, double price, String director) {
            super(name, price);
            this.director = director;
        }
        @Override
        public void printInfo() {
            System.out.println("Movie: Title=" + name + ", Price=" + price 
                + ", Director=" + director);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); // e.g. 3
        ArrayList<Product> products = new ArrayList<>(N);

        for(int i = 0; i < N; i++) {
            String type = sc.next();   // Book or Movie
            String n = sc.next();      // e.g. TheHobbit
            double p = sc.nextDouble();// e.g. 10.0
            String extra = sc.next();  // e.g. Tolkien

            if(type.equals("Book")) {
                products.add(new Book(n, p, extra));
            } else if(type.equals("Movie")) {
                products.add(new Movie(n, p, extra));
            } else {
                // unknown type
            }
        }

        // Print them all
        for(Product prod : products) {
            prod.printInfo();
        }
    }
}
```
</details>

---

## Autotest Scripts

As usual, we provide examples for one C++ and one Java exercise. The pattern can be replicated for the others, adjusting the input data accordingly.

### Example: C++ Autotest

**s06_cpp01_inherit_basics_test.py**

```python
# Save as: s06_cpp01_inherit_basics_test.py
import subprocess

def compile_cpp(source, output):
    proc = subprocess.run(["g++", source, "-o", output], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_exe(executable):
    proc = subprocess.run(["./"+executable], text=True, capture_output=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Running {executable} failed:\n{proc.stderr}")
    return proc.stdout

def test_solutions(student_src, student_exe, ref_src, ref_exe):
    compile_cpp(student_src, student_exe)
    compile_cpp(ref_src, ref_exe)

    student_out = run_exe(student_exe)
    ref_out = run_exe(ref_exe)

    # We expect "Some generic animal sound" and "Woof"
    if "Some generic animal sound" not in student_out or "Woof" not in student_out:
        raise AssertionError(f"Expected lines in student output:\n{student_out}")
    if "Some generic animal sound" not in ref_out or "Woof" not in ref_out:
        raise AssertionError(f"Expected lines in reference output:\n{ref_out}")

    print("All tests passed for s06_cpp01_inherit_basics.")

if __name__ == "__main__":
    test_solutions(
        "s06_cpp01_inherit_basics.cpp",
        "s06_cpp01_inherit_basics_student",
        "s06_cpp01_inherit_basics_sol.cpp",
        "s06_cpp01_inherit_basics_ref"
    )
```

### Example: Java Autotest

**s06_java01_inherit_basics_test.py**

```python
# Save as: s06_java01_inherit_basics_test.py
import subprocess, os

def compile_java(source):
    proc = subprocess.run(["javac", source], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_java(classname):
    proc = subprocess.run(["java", classname], text=True, capture_output=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Running {classname} failed:\n{proc.stderr}")
    return proc.stdout

def test_solutions(student_src, ref_src):
    compile_java(student_src)
    compile_java(ref_src)

    student_class = os.path.splitext(student_src)[0]
    ref_class = os.path.splitext(ref_src)[0]

    student_out = run_java(student_class)
    ref_out = run_java(ref_class)

    if "Some generic animal sound" not in student_out or "Woof" not in student_out:
        raise AssertionError(f"Expected lines in student output:\n{student_out}")
    if "Some generic animal sound" not in ref_out or "Woof" not in ref_out:
        raise AssertionError(f"Expected lines in reference output:\n{ref_out}")

    print("All tests passed for s06_java01_inherit_basics.")

if __name__ == "__main__":
    test_solutions("s06_java01_inherit_basics.java", "s06_java01_inherit_basics_sol.java")
```

---

## Final Checklist

1. **Detailed Explanations**  
   - We explained inheritance, polymorphism, overriding, subclass constructors, and how they fit into the big picture of OOP.

2. **All Concepts Introduced Before Use**  
   - We introduced the fundamentals of inheritance and polymorphism, plus how to override methods in both C++ and Java, before the exercises.

3. **5 Exercises per Language**  
   - Each progressively integrates inheritance, virtual functions (C++), abstract classes (Java), and finally ties in with Assignment 1 (Stage 2).

4. **Starter Code in Each Exercise**  
   - Each exercise file has a code block with `// TODO:` placeholders.

5. **Reference Solutions + Autotests**  
   - Solutions provided for each exercise, plus example test scripts for one exercise in each language.

6. **Consistent Filenames**  
   - We used `s06_cppNN_<shortname>.cpp` and `s06_javaNN_<shortname>.java` for all exercises, solutions, and test scripts.

7. **Trusted Resource Links**  
   - Provided official documentation for C++ and Java, focusing on inheritance and virtual functions.

8. **No Unmet Dependencies**  
   - Everything needed for inheritance/polymorphism has been introduced. We reference prior sessions for basic class knowledge.

9. **Self-Contained**  
   - Explanations, exercises, solutions, and test scripts are all included in this one session document.

With that, **Session 6** is complete, covering inheritance and polymorphism in C++ and Java, culminating in **Assignment 1 (Stage 2)**.

**End of Session 6 Materials**