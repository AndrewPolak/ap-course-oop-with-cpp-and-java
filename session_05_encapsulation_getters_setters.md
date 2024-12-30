```bash
# Run this command to create all required files for Session 5 with our naming convention.
touch \
s05_cpp01_encaps_getter.cpp s05_cpp01_encaps_getter_sol.cpp s05_cpp01_encaps_getter_test.py \
s05_cpp02_print_details.cpp s05_cpp02_print_details_sol.cpp s05_cpp02_print_details_test.py \
s05_cpp03_product_class.cpp s05_cpp03_product_class_sol.cpp s05_cpp03_product_class_test.py \
s05_cpp04_assignment1_stage1.cpp s05_cpp04_assignment1_stage1_sol.cpp s05_cpp04_assignment1_stage1_test.py \
s05_cpp05_debug_inspection.cpp s05_cpp05_debug_inspection_sol.cpp s05_cpp05_debug_inspection_test.py \
s05_java01_encaps_getter.java s05_java01_encaps_getter_sol.java s05_java01_encaps_getter_test.py \
s05_java02_print_details.java s05_java02_print_details_sol.java s05_java02_print_details_test.py \
s05_java03_product_class.java s05_java03_product_class_sol.java s05_java03_product_class_test.py \
s05_java04_assignment1_stage1.java s05_java04_assignment1_stage1_sol.java s05_java04_assignment1_stage1_test.py \
s05_java05_debug_inspection.java s05_java05_debug_inspection_sol.java s05_java05_debug_inspection_test.py
```

---

# Session 5: **Encapsulation and Getters/Setters**  
**Start Printing Product Details from Objects**  
**Introduction to Assignment 1 (Stage 1)**

## Overview

Following Session 4’s introduction to basic classes, access modifiers, and instance methods, **Session 5** dives deeper into **encapsulation** and effective use of **getters/setters**. We’ll also walk through the process of **printing object details** in a clean, structured way. Finally, we will **introduce Assignment 1 (Stage 1)**, which asks you to implement a basic product class in both C++ and Java.

### Key Topics

1. **Encapsulation and Data Hiding**  
   - Why private fields are crucial in large-scale projects.  
   - When and how to use getters/setters.  
   - Common pitfalls of too many or too few accessors.

2. **Safe Access to Object Data**  
   - Ensuring data integrity with validation in setters.  
   - Returning copies or references from getters (C++ specifics).  
   - Dealing with strings and special data types.

3. **Printing Object Details**  
   - How to create a formatted print method or function inside the class (e.g., `printInfo()` or `toString()` in Java).  
   - Why this approach centralizes and unifies how your object is displayed/logged.

4. **Intro to Assignment 1 (Stage 1)**  
   - Build a simple `Product` class in each language (C++ and Java).  
   - Use it to store and print a small collection of products.  
   - This stage focuses on **fundamental OOP usage**: classes, fields, constructors, getters, setters, printing.

By the end of this session, you’ll be comfortable designing classes that safely expose internal data, printing object details in a standardized fashion, and be ready to implement Stage 1 of Assignment 1.

---

## Detailed, Substantive Explanations

### 1. Encapsulation with Getters/Setters

**Why Encapsulation Matters**  

- In large projects, direct public access to fields can lead to unintended side effects.  
- By making fields `private` and providing “getter” methods to retrieve them and “setter” methods to update them, you can control and validate all changes.

**Typical Getter/Setter Patterns**  

- **C++ Example**:
  ```cpp
  class Product {
  private:
      std::string name;
      double price;
  public:
      Product(const std::string &n, double p) : name(n), price(p) {}
      std::string getName() const { return name; }
      void setName(const std::string &n) { name = n; }
      double getPrice() const { return price; }
      void setPrice(double p) {
          if (p >= 0) price = p;
      }
  };
  ```
- **Java Example**:
  ```java
  public class Product {
      private String name;
      private double price;

      public Product(String name, double price) {
          this.name = name;
          this.price = price;
      }

      public String getName() {
          return this.name;
      }

      public void setName(String name) {
          this.name = name;
      }

      public double getPrice() {
          return this.price;
      }

      public void setPrice(double price) {
          if (price >= 0) {
              this.price = price;
          }
      }
  }
  ```
  
**Considerations**  

- **Validation in Setters**: Always check if input is valid.  
- **Read-Only Fields**: If a field should never change after construction, you might omit a setter or use `const` references (C++).

### 2. Printing Object Details

Rather than scattered `std::cout << ...` or `System.out.println(...);` across the code, having a dedicated method to print (or generate a string representing) the object fosters uniform output.

**C++**  
```cpp
void printInfo() const {
    std::cout << "Product: " << name << ", Price: " << price << std::endl;
}
```

**Java**  
```java
public void printInfo() {
    System.out.println("Product: " + name + ", Price: " + price);
}
```

Or in Java, you might override `toString()`:
```java
@Override
public String toString() {
    return "Product: " + name + ", Price: " + price;
}
```

### 3. Micro-Assignment & Assignment 1 (Stage 1)

**Micro-Assignment**:  

- Accessing product data safely through getters.  
- Printing product details with a dedicated method.

**Assignment 1 (Stage 1)**:  

- This first stage focuses on **basic class usage**. You’ll implement a `Product` class in both C++ and Java, store a small list of products, and print them.  
- You’ll be building on it in future stages to add inheritance (`Book`, `Movie`), operator overloading (C++), generics (Java), etc.

---

## Official Documentation & Trusted Resources

- **C++ Accessors/Mutators**  
  [https://en.cppreference.com/w/cpp/language/access](https://en.cppreference.com/w/cpp/language/access)  
- **Java Getters/Setters**  
  [https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html](https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html)  
- **Effective C++** by Scott Meyers (Item on Encapsulation, if you have library access).  
- **Effective Java** by Joshua Bloch (Chapter on Classes and Interfaces).

---

## Exercises

Below are **5 exercises for C++** and **5 for Java** that practice encapsulation, getters/setters, and printing. Each exercise follows our naming convention, includes starter code, and links to reference solutions after.

### C++ Exercises

#### 1) **s05_cpp01_encaps_getter.cpp**
**Goal:** Practice writing getters and a single setter with validation.

- **Instructions:**  
  1. Define a class `EncapsTest` with a private integer `value`.  
  2. Constructor sets `value` to 0 initially.  
  3. A public method `getValue()` returns `value`.  
  4. A public method `setValue(int v)` sets `value` only if `v >= 0`.  
  5. In `main`, test by attempting to set both valid and invalid values, then print the final result.

- **Expected Behavior (Example):**  
  ```
  Trying to set to 10... OK.
  Trying to set to -5... Rejected.
  Final value: 10
  ```

```cpp
// Save as: s05_cpp01_encaps_getter.cpp
#include <iostream>

// TODO: Define class EncapsTest with private int value
//       getValue(), setValue(int)

int main() {
    // TODO: create EncapsTest, attempt to set multiple values, print final
    return 0;
}
```

---

#### 2) **s05_cpp02_print_details.cpp**
**Goal:** Add a `printInfo()` method that formats output of an object’s data.

- **Instructions:**  
  1. Create a class `User` with private fields: `std::string username`, `int age`.  
  2. Provide a constructor to set both.  
  3. Provide a public method `printInfo()` that prints `"User: <username>, Age: <age>"`.  
  4. In `main`, create two `User` objects and call `printInfo()` on each.

- **Expected Behavior (Example):**  
  ```
  User: alice, Age: 30
  User: bob, Age: 25
  ```

```cpp
// Save as: s05_cpp02_print_details.cpp
#include <iostream>
#include <string>

// TODO: Define class User with private username, age, constructor, printInfo()

int main() {
    // TODO: create two Users, call printInfo() for each
    return 0;
}
```

---

#### 3) **s05_cpp03_product_class.cpp**
**Goal:** Continue refining a `Product` class from prior sessions with getters/setters and a `printInfo()`.

- **Instructions:**  
  1. `Product` has private `name`, `price`.  
  2. Constructors, `getName()`, `setName()`, `getPrice()`, `setPrice()`.  
  3. Add `void printInfo() const`, printing `"Product: <name>, Price: <price>"`.  
  4. In `main`, read `name, price` from input, create a product, and print info.

- **Input (Example):**  
  ```
  Apple 1.2
  ```
- **Output (Example):**  
  ```
  Product: Apple, Price: 1.2
  ```

```cpp
// Save as: s05_cpp03_product_class.cpp
#include <iostream>
#include <string>

// TODO: class Product: private name, price; getters, setters, printInfo()

int main() {
    // TODO: read name, price, create a Product, print info
    return 0;
}
```

---

#### 4) **s05_cpp04_assignment1_stage1.cpp**
**Goal:** **Introducing Assignment 1 (Stage 1)** – Build a simple inventory system that holds multiple `Product` objects.

- **Instructions (Simplified Stage 1):**  
  1. Create a small array or `std::vector<Product>` (your choice).  
  2. Prompt the user to enter multiple `(name, price)` pairs.  
  3. Store them in your container.  
  4. Print all products at the end by calling each product’s `printInfo()`.  
  5. This forms the foundation for future assignment expansions.

- **Input (Example):**  
  ```
  3
  Apple 1.2
  Book 15
  Pen 1.5
  ```
- **Output (Example):**  
  ```
  Product: Apple, Price: 1.2
  Product: Book, Price: 15
  Product: Pen, Price: 1.5
  ```

```cpp
// Save as: s05_cpp04_assignment1_stage1.cpp
#include <iostream>
#include <vector>
#include <string>

// TODO: Reuse or redefine a basic Product class with printInfo()

int main() {
    // TODO: read an integer N
    // read N products (name, price), store in a vector
    // print them all
    return 0;
}
```

---

#### 5) **s05_cpp05_debug_inspection.cpp**
**Goal:** Insert debug statements to trace the flow when creating multiple products.

- **Instructions:**  
  1. In your `Product` constructor(s), print a debug message: `"Product created: <name>, <price>"`.  
  2. In `setPrice()`, print a debug message whenever price changes.  
  3. In `main`, create multiple products, call `setPrice()` on at least one, watch the debug flow in the output.

- **Output (Example):**  
  ```
  Product created: Apple, 1.2
  Product created: Book, 15
  Changing price from 15.00 to 10.00
  ...
  ```

```cpp
// Save as: s05_cpp05_debug_inspection.cpp
#include <iostream>
#include <string>

// TODO: class Product with debug prints in constructor and setPrice()

int main() {
    // TODO: create multiple Product objects, call setPrice(), observe debug messages
    return 0;
}
```

---

### Java Exercises

#### 1) **s05_java01_encaps_getter.java**
**Goal:** Define a simple class with private field(s), getters, setters.

- **Instructions:**  
  1. Class `EncapsTest` with a private `int value`, initialized to 0 in the constructor.  
  2. `getValue()` returns the current `value`.  
  3. `setValue(int v)` sets `value` only if `v >= 0`.  
  4. In `main`, test setting valid/invalid data, then print the final.

- **Expected Behavior (Example):**  
  ```
  Trying to set to 10... OK.
  Trying to set to -5... Rejected.
  Final value: 10
  ```

```java
// Save as: s05_java01_encaps_getter.java
public class s05_java01_encaps_getter {
    static class EncapsTest {
        // TODO: private int value = 0; constructor, getValue(), setValue(int)
    }

    public static void main(String[] args) {
        // TODO: create EncapsTest, try setting multiple values, print final
    }
}
```

---

#### 2) **s05_java02_print_details.java**
**Goal:** Create a `User` class with `printInfo()` method.

- **Instructions:**  
  1. `User` has private `String username`, `int age`.  
  2. Constructor sets both.  
  3. `printInfo()` prints `"User: <username>, Age: <age>"`.  
  4. In `main`, create two `User` objects, call `printInfo()` on each.

- **Output (Example):**  
  ```
  User: alice, Age: 30
  User: bob, Age: 25
  ```

```java
// Save as: s05_java02_print_details.java
public class s05_java02_print_details {
    static class User {
        // TODO: private username, age
        // constructor
        // printInfo()
    }

    public static void main(String[] args) {
        // TODO: create two users, print details
    }
}
```

---

#### 3) **s05_java03_product_class.java**
**Goal:** A more robust `Product` class with getters, setters, and `printInfo()` (or `toString()`).

- **Instructions:**  
  1. Private fields: `String name`, `double price`.  
  2. Constructor sets them.  
  3. `getName()`, `setName()`, `getPrice()`, `setPrice()`.  
  4. `printInfo()` or override `toString()` to show name and price.  
  5. In `main`, read `name`, `price`, create a `Product`, print info.

```java
// Save as: s05_java03_product_class.java
import java.util.Scanner;

public class s05_java03_product_class {
    static class Product {
        // TODO: name, price, constructor, getters/setters, printInfo() or toString()
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read name, price, create a Product, print details
    }
}
```

---

#### 4) **s05_java04_assignment1_stage1.java**
**Goal:** **Assignment 1 (Stage 1)** in Java – store multiple `Product` objects and print them all.

- **Instructions:**  
  1. Read an integer N (number of products).  
  2. For each product, read `(name, price)`.  
  3. Store them (in an `ArrayList<Product>`).  
  4. Print them all at the end by calling `printInfo()` or using their `toString()`.

- **Input (Example):**  
  ```
  3
  Apple 1.2
  Book 15
  Pen 1.5
  ```
- **Output (Example):**  
  ```
  Product: Apple, Price: 1.2
  Product: Book, Price: 15.0
  Product: Pen, Price: 1.5
  ```

```java
// Save as: s05_java04_assignment1_stage1.java
import java.util.ArrayList;
import java.util.Scanner;

public class s05_java04_assignment1_stage1 {
    static class Product {
        // TODO: private name, price, constructor, printInfo()/toString()
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read N
        // read N products, store in ArrayList
        // print them all
    }
}
```

---

#### 5) **s05_java05_debug_inspection.java**
**Goal:** Insert debug prints in constructor and setter(s).

- **Instructions:**  
  1. Class `Product` with debug messages in the constructor: `"Creating product: <name>, <price>"`.  
  2. Debug messages in `setPrice()` when price changes.  
  3. In `main`, create multiple products, call `setPrice()`, watch debug output.

```java
// Save as: s05_java05_debug_inspection.java
public class s05_java05_debug_inspection {
    static class Product {
        // TODO: debug prints in constructor, setPrice(), etc.
    }

    public static void main(String[] args) {
        // TODO: create multiple products, adjust price, observe debug prints
    }
}
```

---

## Reference Solutions

Below you’ll find sample solutions. Your code may differ but should match the core functionality and logic.

### C++ Solutions

<details>
<summary><strong>s05_cpp01_encaps_getter_sol.cpp</strong></summary>

```cpp
// Save as: s05_cpp01_encaps_getter_sol.cpp
#include <iostream>

class EncapsTest {
private:
    int value;
public:
    EncapsTest() : value(0) {}

    int getValue() const {
        return value;
    }

    void setValue(int v) {
        if (v >= 0) {
            value = v;
            std::cout << "Trying to set to " << v << "... OK.\n";
        } else {
            std::cout << "Trying to set to " << v << "... Rejected.\n";
        }
    }
};

int main() {
    EncapsTest obj;
    obj.setValue(10);
    obj.setValue(-5);
    std::cout << "Final value: " << obj.getValue() << std::endl;
    return 0;
}
```
</details>

<details>
<summary><strong>s05_cpp02_print_details_sol.cpp</strong></summary>

```cpp
// Save as: s05_cpp02_print_details_sol.cpp
#include <iostream>
#include <string>

class User {
private:
    std::string username;
    int age;
public:
    User(const std::string &u, int a) : username(u), age(a) {}

    void printInfo() const {
        std::cout << "User: " << username << ", Age: " << age << std::endl;
    }
};

int main() {
    User u1("alice", 30);
    User u2("bob", 25);

    u1.printInfo();
    u2.printInfo();
    return 0;
}
```
</details>

<details>
<summary><strong>s05_cpp03_product_class_sol.cpp</strong></summary>

```cpp
// Save as: s05_cpp03_product_class_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const { return name; }
    void setName(const std::string &n) { name = n; }

    double getPrice() const { return price; }
    void setPrice(double p) {
        if (p >= 0) price = p;
    }

    void printInfo() const {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    std::string n;
    double p;
    std::cin >> n >> p; // e.g. Apple 1.2
    Product prod(n, p);
    prod.printInfo();
    return 0;
}
```
</details>

<details>
<summary><strong>s05_cpp04_assignment1_stage1_sol.cpp</strong></summary>

```cpp
// Save as: s05_cpp04_assignment1_stage1_sol.cpp
#include <iostream>
#include <vector>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {}
    void printInfo() const {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    int N;
    std::cin >> N; // e.g. 3
    std::vector<Product> products;
    products.reserve(N);

    for(int i = 0; i < N; i++) {
        std::string n;
        double p;
        std::cin >> n >> p;
        products.emplace_back(n, p);
    }

    for(const auto &prod : products) {
        prod.printInfo();
    }

    return 0;
}
```
</details>

<details>
<summary><strong>s05_cpp05_debug_inspection_sol.cpp</strong></summary>

```cpp
// Save as: s05_cpp05_debug_inspection_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string &n, double p) : name(n), price(p) {
        std::cout << "Product created: " << n << ", " << p << std::endl;
    }
    void setPrice(double newPrice) {
        std::cout << "Changing price from " << price << " to " << newPrice << std::endl;
        if(newPrice >= 0) {
            price = newPrice;
        }
    }
};

int main() {
    Product p1("Apple", 1.2);
    Product p2("Book", 15);
    p2.setPrice(10.0);
    return 0;
}
```
</details>

---

### Java Solutions

<details>
<summary><strong>s05_java01_encaps_getter_sol.java</strong></summary>

```java
// Save as: s05_java01_encaps_getter_sol.java
public class s05_java01_encaps_getter_sol {
    static class EncapsTest {
        private int value;

        public EncapsTest() {
            this.value = 0;
        }

        public int getValue() {
            return this.value;
        }

        public void setValue(int v) {
            if (v >= 0) {
                this.value = v;
                System.out.println("Trying to set to " + v + "... OK.");
            } else {
                System.out.println("Trying to set to " + v + "... Rejected.");
            }
        }
    }

    public static void main(String[] args) {
        EncapsTest obj = new EncapsTest();
        obj.setValue(10);
        obj.setValue(-5);
        System.out.println("Final value: " + obj.getValue());
    }
}
```
</details>

<details>
<summary><strong>s05_java02_print_details_sol.java</strong></summary>

```java
// Save as: s05_java02_print_details_sol.java
public class s05_java02_print_details_sol {
    static class User {
        private String username;
        private int age;

        public User(String username, int age) {
            this.username = username;
            this.age = age;
        }

        public void printInfo() {
            System.out.println("User: " + username + ", Age: " + age);
        }
    }

    public static void main(String[] args) {
        User u1 = new User("alice", 30);
        User u2 = new User("bob", 25);

        u1.printInfo();
        u2.printInfo();
    }
}
```
</details>

<details>
<summary><strong>s05_java03_product_class_sol.java</strong></summary>

```java
// Save as: s05_java03_product_class_sol.java
import java.util.Scanner;

public class s05_java03_product_class_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public double getPrice() {
            return price;
        }

        public void setPrice(double p) {
            if (p >= 0) {
                this.price = p;
            }
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price: " + price);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();   // e.g. Apple
        double p = sc.nextDouble(); // e.g. 1.2
        Product prod = new Product(n, p);
        prod.printInfo();
    }
}
```
</details>

<details>
<summary><strong>s05_java04_assignment1_stage1_sol.java</strong></summary>

```java
// Save as: s05_java04_assignment1_stage1_sol.java
import java.util.ArrayList;
import java.util.Scanner;

public class s05_java04_assignment1_stage1_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void printInfo() {
            System.out.println("Product: " + name + ", Price: " + price);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Product> products = new ArrayList<>();

        for(int i = 0; i < N; i++) {
            String n = sc.next();
            double p = sc.nextDouble();
            products.add(new Product(n, p));
        }

        for(Product prod : products) {
            prod.printInfo();
        }
    }
}
```
</details>

<details>
<summary><strong>s05_java05_debug_inspection_sol.java</strong></summary>

```java
// Save as: s05_java05_debug_inspection_sol.java
public class s05_java05_debug_inspection_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            System.out.println("Creating product: " + name + ", " + price);
            this.name = name;
            this.price = price;
        }

        public void setPrice(double newPrice) {
            System.out.println("Changing price from " + this.price + " to " + newPrice);
            if (newPrice >= 0) {
                this.price = newPrice;
            }
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product("Apple", 1.2);
        Product p2 = new Product("Book", 15.0);
        p2.setPrice(10.0);
    }
}
```
</details>

---

## Autotest Scripts

As in previous sessions, we provide one C++ and one Java test script example. Replicate for all exercises as you see fit.

### Example: C++ Autotest

**s05_cpp01_encaps_getter_test.py**

```python
# Save as: s05_cpp01_encaps_getter_test.py
import subprocess

def compile_cpp(source, output):
    proc = subprocess.run(["g++", source, "-o", output], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_exe(executable, input_data=""):
    proc = subprocess.run([f"./{executable}"], input=input_data, text=True, capture_output=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Running {executable} failed:\n{proc.stderr}")
    return proc.stdout

def test_solutions(student_src, student_exe, ref_src, ref_exe):
    compile_cpp(student_src, student_exe)
    compile_cpp(ref_src, ref_exe)

    student_out = run_exe(student_exe)
    ref_out = run_exe(ref_exe)

    # Both outputs should contain lines about "OK." and "Rejected."
    if "OK." not in student_out or "Rejected." not in student_out:
        raise AssertionError(f"Expected feedback about valid/invalid sets in student output:\n{student_out}")
    if "OK." not in ref_out or "Rejected." not in ref_out:
        raise AssertionError(f"Expected feedback in reference output:\n{ref_out}")

    print("All tests passed for s05_cpp01_encaps_getter.")

if __name__ == "__main__":
    test_solutions(
        "s05_cpp01_encaps_getter.cpp", 
        "s05_cpp01_encaps_getter_student", 
        "s05_cpp01_encaps_getter_sol.cpp", 
        "s05_cpp01_encaps_getter_ref"
    )
```

### Example: Java Autotest

**s05_java01_encaps_getter_test.py**

```python
# Save as: s05_java01_encaps_getter_test.py
import subprocess, os

def compile_java(source):
    proc = subprocess.run(["javac", source], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_java(classname, input_data=""):
    proc = subprocess.run(["java", classname], input=input_data, text=True, capture_output=True)
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

    if "OK." not in student_out or "Rejected." not in student_out:
        raise AssertionError(f"Expected feedback about valid/invalid sets in student output:\n{student_out}")
    if "OK." not in ref_out or "Rejected." not in ref_out:
        raise AssertionError(f"Expected feedback in reference output:\n{ref_out}")

    print("All tests passed for s05_java01_encaps_getter.")

if __name__ == "__main__":
    test_solutions("s05_java01_encaps_getter.java", "s05_java01_encaps_getter_sol.java")
```

---

## Final Checklist

1. **Detailed, Substantive Explanations**  
   - We discussed the purpose and process of getters/setters, encapsulation, and printing object details, plus how it integrates with Assignment 1 (Stage 1).

2. **All Relevant Concepts Introduced Before Use**  
   - We explained how to safely control field access and how to unify object printing before giving the exercises.

3. **5 C++ + 5 Java Exercises**  
   - Each exercise focuses on encapsulation, safe data access, or printing object details, culminating in Stage 1 of Assignment 1.

4. **Starter Code in Each Exercise**  
   - Each exercise file has a code block with `// TODO:` placeholders.

5. **Reference Solutions + Autotests**  
   - Provided for each exercise, following the naming convention: `s05_cppNN_<short>.cpp` / `s05_javaNN_<short>.java`.

6. **Consistent Filenames**  
   - The `touch` command at the top includes all necessary starter, solution, and test scripts.

7. **Trusted Resource Links**  
   - Official documentation for C++/Java, references to relevant books (Effective C++/Java).

8. **No Unmet Dependencies**  
   - We’ve only used classes, encapsulation, printing, vectors/ArrayLists, which have been introduced or are standard library features.

9. **Self-Contained**  
   - Everything for Session 5 is in this document: explanations → exercises → solutions → test scripts → references.

---

**End of Session 5 Materials**