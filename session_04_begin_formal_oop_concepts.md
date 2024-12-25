```bash
# Run this command to create all required files for Session 4 with our new naming convention:
touch \
s04_cpp01_oop_basics.cpp s04_cpp01_oop_basics_sol.cpp s04_cpp01_oop_basics_test.py \
s04_cpp02_access_mod.cpp s04_cpp02_access_mod_sol.cpp s04_cpp02_access_mod_test.py \
s04_cpp03_instance_method.cpp s04_cpp03_instance_method_sol.cpp s04_cpp03_instance_method_test.py \
s04_cpp04_debug_print.cpp s04_cpp04_debug_print_sol.cpp s04_cpp04_debug_print_test.py \
s04_cpp05_product_class.cpp s04_cpp05_product_class_sol.cpp s04_cpp05_product_class_test.py \
s04_java01_oop_basics.java s04_java01_oop_basics_sol.java s04_java01_oop_basics_test.py \
s04_java02_access_mod.java s04_java02_access_mod_sol.java s04_java02_access_mod_test.py \
s04_java03_instance_method.java s04_java03_instance_method_sol.java s04_java03_instance_method_test.py \
s04_java04_debug_print.java s04_java04_debug_print_sol.java s04_java04_debug_print_test.py \
s04_java05_product_class.java s04_java05_product_class_sol.java s04_java05_product_class_test.py
```

## Session 4: **Begin Formal OOP Concepts**

### Concepts Covered

1. **Classes and OOP Foundations:**  
   - Formal definition of a class.  
   - Member variables (fields) vs. local variables.  
   - Constructors and object instantiation.

2. **Access Modifiers:**  
   - `private`, `public`, (and `protected` in C++/Java—though we’ll focus more on `private`/`public` at this stage).  
   - Why encapsulation matters and how access control helps maintain invariants.

3. **Instance Methods:**  
   - Defining methods that act on an object’s fields.  
   - `this` pointer/reference and how it differs in C++ vs. Java.  
   - When and why to use non-static methods.

4. **Micro-Assignment Preparation:**  
   - Implement a `Product` class with fields and methods, which forms the basis for continuing into Assignment 1 (Stage 1) in the next sessions.

By the end of this session, learners should be capable of designing a small class with proper access controls, using constructors, and writing instance methods that operate on class fields. This sets the foundation for larger OOP concepts like inheritance and polymorphism.

-------------------------------------
## Detailed, Substantive Explanations

### 1. OOP with Classes and Objects

**Why Classes?**  

- A **class** is a blueprint for objects, defining fields (data) and methods (behavior).  
- Objects instantiated from a class each have their own copy of the fields, ensuring data is tied to specific instances.

**Defining a Class in C++ vs. Java:**  

- **C++:**
  ```cpp
  class MyClass {
  private:
      int someField;
  public:
      // Constructor
      MyClass(int initialVal) : someField(initialVal) {}

      // Method
      void doSomething() {
          // ...
      }
  };
  ```
- **Java:**
  ```java
  public class MyClass {
      private int someField;

      public MyClass(int initialVal) {
          this.someField = initialVal;
      }

      public void doSomething() {
          // ...
      }
  }
  ```

### 2. Access Modifiers and Encapsulation

- **Encapsulation** ensures data integrity by limiting direct access to fields.  
- **`private`** fields are hidden from outside direct access. Access them via getter/setter methods if needed.  
- **`public`** methods provide a controlled interface.  
- In C++, classes default to **private** fields unless specified, while `struct` defaults to **public**. In Java, explicit `private` or `public` is required for each field/method.

**Example (C++):**  
```cpp
class Example {
private:
    int data;
public:
    Example(int d) : data(d) {}
    int getData() const { return data; }
    void setData(int d) { data = d; }
};
```

**Example (Java):**  
```java
public class Example {
    private int data;

    public Example(int d) {
        this.data = d;
    }

    public int getData() {
        return this.data;
    }

    public void setData(int d) {
        this.data = d;
    }
}
```

### 3. Instance Methods

- **Instance methods** (non-static methods) operate on an object’s own fields.  
- In C++, `this` is an implicit pointer to the current object. In Java, `this` is an implicit reference.  
- Example: A `Product` class might have `applyDiscount(double percent)` that modifies `this->price` in C++ or `this.price` in Java.

### 4. Micro-Assignment Link

- The culminating exercise is to implement a small `Product` class with fields like `name` and `price`, ensuring the class has:  
  1. Proper constructors.  
  2. Private fields, with public getters/setters.  
  3. At least one instance method that manipulates those fields.

This is the stepping stone toward the larger **Assignment 1: Product Inventory System** in upcoming sessions.

## Official Documentation & Trusted Resources

- **C++ Classes & Access Specifiers:**  
  [https://en.cppreference.com/w/cpp/language/classes](https://en.cppreference.com/w/cpp/language/classes)  
  [https://en.cppreference.com/w/cpp/language/access](https://en.cppreference.com/w/cpp/language/access)

- **Java Classes & Methods:**  
  [https://docs.oracle.com/javase/tutorial/java/javaOO/classes.html](https://docs.oracle.com/javase/tutorial/java/javaOO/classes.html)  
  [https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html](https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html)

## Exercises

Below are **5 exercises for C++** and **5 for Java**, each focusing on classes, access modifiers, and instance methods. Pay attention to the **filename convention**: `s04_cpp01_oop_basics.cpp`, etc. The short name should reflect the specific task of each exercise.

---

### C++ Exercises

#### 1) **s04_cpp01_oop_basics.cpp**

**Goal:** Introduce a simple class with a private field and a public method.

- **Instructions:**  
  1. Define a class `Counter` with a private integer field `count`.  
  2. Provide a constructor that initializes `count` to 0.  
  3. Provide a public method `increment()` that adds 1 to `count`.  
  4. Provide a method `getCount()` that returns the current count.  
  5. In `main`, create a `Counter`, call `increment()` a few times, print the final count.

- **Expected Behavior (Example):**  
  ```
  Final count: 3
  ```

```cpp
// Save as: s04_cpp01_oop_basics.cpp
#include <iostream>

// TODO: Define class Counter with private int count, constructor, increment(), and getCount().

int main() {
    // TODO: Create a Counter object, increment it 3 times, print the result.
    return 0;
}
```

---

#### 2) **s04_cpp02_access_mod.cpp**
**Goal:** Experiment with public vs. private fields/methods.

- **Instructions:**  
  1. Define a class `SecretBox` with a private integer field `secretNumber`.  
  2. Provide a constructor that accepts an integer to store in `secretNumber`.  
  3. Provide a public method `revealSecret()` that returns the private field.  
  4. Attempt (in `main`) to directly access `secretNumber` (this should fail to compile).  
  5. Instead, use `revealSecret()` to print its value.

- **Expected Behavior (Example):**
  ```
  The secret number is: 42
  ```

```cpp
// Save as: s04_cpp02_access_mod.cpp
#include <iostream>

// TODO: Define class SecretBox with private secretNumber
//       Provide a constructor, revealSecret() method

int main() {
    // TODO: create a SecretBox with some number, attempt to print secretNumber directly (observe error)
    //       then use revealSecret() to print
    return 0;
}
```

---

#### 3) **s04_cpp03_instance_method.cpp**

**Goal:** Show how instance methods operate on the object’s data.

- **Instructions:**  
  1. Define a class `Rectangle` with private fields `width` and `height`.  
  2. Provide a constructor that initializes both.  
  3. Provide an instance method `area()` that returns `width * height`.  
  4. Provide a method `perimeter()` that returns `2 * (width + height)`.  
  5. In `main`, read two integers, create a `Rectangle`, print its area and perimeter.

- **Input (Example):**  
  ```
  4 5
  ```
- **Output (Example):**  
  ```
  Area: 20
  Perimeter: 18
  ```

```cpp
// Save as: s04_cpp03_instance_method.cpp
#include <iostream>

// TODO: Define class Rectangle with width, height, constructor, area(), perimeter().

int main() {
    // TODO: read width, height
    // create Rectangle, print area and perimeter
    return 0;
}
```

---

#### 4) **s04_cpp04_debug_print.cpp**

**Goal:** Insert debug prints to observe constructor calls and method usage.

- **Instructions:**  
  1. Define a class `DebugExample` with a private integer `value`.  
  2. In the constructor, print `"DebugExample constructor called, value = ..."`.  
  3. Provide a method `incrementValue()` that prints a debug line before incrementing `value`.  
  4. In `main`, create a `DebugExample`, call `incrementValue()` a few times, observe debug prints.

- **No specific input**  
- **Output (Example):**  
  ```
  DebugExample constructor called, value = 5
  incrementValue called, current value = 5
  incrementValue called, current value = 6
  ...
  ```

```cpp
// Save as: s04_cpp04_debug_print.cpp
#include <iostream>

// TODO: Define class DebugExample with a constructor that prints debug info
//       and an incrementValue() method that prints debug info before incrementing value.

int main() {
    // TODO: create DebugExample with some initial value
    // call incrementValue() a few times
    return 0;
}
```

---

#### 5) **s04_cpp05_product_class.cpp**

**Goal:** Implement a `Product` class to tie session 4 concepts together.

- **Instructions:**  
  1. Define a class `Product` with private fields `std::string name` and `double price`.  
  2. Provide a constructor that sets both fields.  
  3. Provide getters: `getName()`, `getPrice()`.  
  4. Provide a method `applyDiscount(double percent)` that reduces price by the given percentage if valid.  
  5. In `main`, read name, price, discount, create a `Product`, apply the discount, then print new price.

- **Input (Example):**  
  ```
  Book 20 25
  ```
- **Output (Example):**  
  ```
  Discounted price: 15
  ```

```cpp
// Save as: s04_cpp05_product_class.cpp
#include <iostream>
#include <string>

// TODO: Define class Product with private fields name, price
//       constructor, getName(), getPrice(), applyDiscount(double)

int main() {
    // TODO: read name, price, discount
    // create Product
    // applyDiscount
    // print final discounted price
    return 0;
}
```

---

### Java Exercises

#### 1) **s04_java01_oop_basics.java**

**Goal:** Create a simple `Counter` class with a private field and public methods.

- **Instructions:**  
  1. `Counter` class has a private `int count`.  
  2. Constructor initializes `count` to 0.  
  3. `increment()` method adds 1 to `count`.  
  4. `getCount()` returns current `count`.  
  5. In `main`, create a `Counter`, call `increment()` 3 times, print final count.

- **Expected Behavior (Example):**  
  ```
  Final count: 3
  ```

```java
// Save as: s04_java01_oop_basics.java
public class s04_java01_oop_basics {
    // TODO: define static class Counter with private int count, constructor, increment(), getCount()

    public static void main(String[] args) {
        // TODO: Create a Counter object, increment 3 times, print final count
    }
}
```

---

#### 2) **s04_java02_access_mod.java**

**Goal:** Demonstrate public vs. private in a small class.

- **Instructions:**  
  1. Define `SecretBox` with a private int `secretNumber`.  
  2. Constructor takes an int to store in `secretNumber`.  
  3. Public method `revealSecret()` returns the private field.  
  4. In `main`, try directly accessing `secretNumber` (should fail).  
  5. Print the value via `revealSecret()`.

- **Expected Behavior (Example):**  
  ```
  The secret number is: 42
  ```

```java
// Save as: s04_java02_access_mod.java
public class s04_java02_access_mod {
    static class SecretBox {
        // TODO: private int secretNumber
        // constructor
        // revealSecret()
    }

    public static void main(String[] args) {
        // TODO: create SecretBox, attempt direct access vs. revealSecret()
    }
}
```

---

#### 3) **s04_java03_instance_method.java**

**Goal:** Show instance methods for area/perimeter in a `Rectangle` class.

- **Instructions:**  
  1. `Rectangle` class with private `width`, `height`.  
  2. Constructor sets them.  
  3. Methods `area()` and `perimeter()`.  
  4. In `main`, read two integers, create a `Rectangle`, print area and perimeter.

- **Input (Example):**  
  ```
  4 5
  ```
- **Output (Example):**  
  ```
  Area: 20
  Perimeter: 18
  ```

```java
// Save as: s04_java03_instance_method.java
import java.util.Scanner;

public class s04_java03_instance_method {
    static class Rectangle {
        // TODO: private width, height
        // constructor
        // area()
        // perimeter()
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read width, height, create Rectangle, print area and perimeter
    }
}
```

---

#### 4) **s04_java04_debug_print.java**

**Goal:** Insert debug prints to track constructor and method calls.

- **Instructions:**  
  1. `DebugExample` class with a private `value`.  
  2. Constructor prints `"DebugExample constructor called, value = X"`.  
  3. Method `incrementValue()` prints a debug line, then increments `value`.  
  4. In `main`, create a `DebugExample`, call `incrementValue()` multiple times, observe prints.

- **No specific input**  
- **Output (Example):**  
  ```
  DebugExample constructor called, value = 5
  incrementValue called, current value = 5
  ...
  ```

```java
// Save as: s04_java04_debug_print.java
public class s04_java04_debug_print {
    static class DebugExample {
        // TODO: private int value
        // constructor debug print
        // incrementValue debug print
    }

    public static void main(String[] args) {
        // TODO: create DebugExample with some initial value
        // call incrementValue() multiple times
    }
}
```

---

#### 5) **s04_java05_product_class.java**

**Goal:** Implement a `Product` class to showcase OOP concepts.

- **Instructions:**  
  1. `Product` class with private `String name` and `double price`.  
  2. Constructor sets both.  
  3. Getters `getName()`, `getPrice()`.  
  4. `applyDiscount(double percent)` that lowers `price` if `percent` is valid.  
  5. In `main`, read `name`, `price`, `discount`, then create a `Product`, apply discount, print final price.

- **Input (Example):**  
  ```
  Book 20 25
  ```
- **Output (Example):**  
  ```
  Discounted price: 15.0
  ```

```java
// Save as: s04_java05_product_class.java
import java.util.Scanner;

public class s04_java05_product_class {
    static class Product {
        // TODO: private fields name, price
        // constructor
        // getName(), getPrice()
        // applyDiscount(double percent)
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read name, price, discount
        // create Product
        // applyDiscount
        // print final discounted price
    }
}
```

-------------------------------------
## Reference Solutions

Below are sample solutions for each exercise. Your solution might differ slightly in code style but should match in overall logic and results.

### C++ Solutions

<details>
<summary><strong>s04_cpp01_oop_basics_sol.cpp</strong></summary>

```cpp
// Save as: s04_cpp01_oop_basics_sol.cpp
#include <iostream>

class Counter {
private:
    int count;
public:
    Counter() : count(0) {} // constructor sets count to 0
    void increment() {
        count++;
    }
    int getCount() const {
        return count;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    std::cout << "Final count: " << c.getCount() << std::endl;
    return 0;
}
```
</details>

<details>
<summary><strong>s04_cpp02_access_mod_sol.cpp</strong></summary>

```cpp
// Save as: s04_cpp02_access_mod_sol.cpp
#include <iostream>

class SecretBox {
private:
    int secretNumber;
public:
    SecretBox(int num) : secretNumber(num) {}
    int revealSecret() const {
        return secretNumber;
    }
};

int main() {
    SecretBox box(42);

    // This line would fail if uncommented: 
    // std::cout << box.secretNumber << std::endl;

    std::cout << "The secret number is: " << box.revealSecret() << std::endl;
    return 0;
}
```
</details>

<details>
<summary><strong>s04_cpp03_instance_method_sol.cpp</strong></summary>

```cpp
// Save as: s04_cpp03_instance_method_sol.cpp
#include <iostream>

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int area() const {
        return width * height;
    }

    int perimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    int w, h;
    std::cin >> w >> h;
    Rectangle rect(w, h);
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    return 0;
}
```
</details>

<details>
<summary><strong>s04_cpp04_debug_print_sol.cpp</strong></summary>

```cpp
// Save as: s04_cpp04_debug_print_sol.cpp
#include <iostream>

class DebugExample {
private:
    int value;
public:
    DebugExample(int val) : value(val) {
        std::cout << "DebugExample constructor called, value = " << val << std::endl;
    }
    void incrementValue() {
        std::cout << "incrementValue called, current value = " << value << std::endl;
        value++;
    }
};

int main() {
    DebugExample dbg(5);
    dbg.incrementValue();
    dbg.incrementValue();
    dbg.incrementValue();
    return 0;
}
```
</details>

<details>
<summary><strong>s04_cpp05_product_class_sol.cpp</strong></summary>

```cpp
// Save as: s04_cpp05_product_class_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
public:
    Product(const std::string& n, double p)
        : name(n), price(p) {}
    
    std::string getName() const { return name; }
    double getPrice() const { return price; }

    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }
};

int main() {
    std::string n;
    double p, d;
    std::cin >> n >> p >> d;  // e.g., Book 20 25
    Product prod(n, p);
    prod.applyDiscount(d);
    std::cout << "Discounted price: " << prod.getPrice() << std::endl;
    return 0;
}
```
</details>

---

### Java Solutions

<details>
<summary><strong>s04_java01_oop_basics_sol.java</strong></summary>

```java
// Save as: s04_java01_oop_basics_sol.java
public class s04_java01_oop_basics_sol {
    static class Counter {
        private int count;

        public Counter() {
            this.count = 0;
        }

        public void increment() {
            this.count++;
        }

        public int getCount() {
            return this.count;
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
```
</details>

<details>
<summary><strong>s04_java02_access_mod_sol.java</strong></summary>

```java
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
```
</details>

<details>
<summary><strong>s04_java03_instance_method_sol.java</strong></summary>

```java
// Save as: s04_java03_instance_method_sol.java
import java.util.Scanner;

public class s04_java03_instance_method_sol {
    static class Rectangle {
        private int width;
        private int height;

        public Rectangle(int w, int h) {
            this.width = w;
            this.height = h;
        }

        public int area() {
            return this.width * this.height;
        }

        public int perimeter() {
            return 2 * (this.width + this.height);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int w = sc.nextInt();
        int h = sc.nextInt();
        Rectangle rect = new Rectangle(w, h);
        System.out.println("Area: " + rect.area());
        System.out.println("Perimeter: " + rect.perimeter());
    }
}
```
</details>

<details>
<summary><strong>s04_java04_debug_print_sol.java</strong></summary>

```java
// Save as: s04_java04_debug_print_sol.java
public class s04_java04_debug_print_sol {
    static class DebugExample {
        private int value;

        public DebugExample(int val) {
            System.out.println("DebugExample constructor called, value = " + val);
            this.value = val;
        }

        public void incrementValue() {
            System.out.println("incrementValue called, current value = " + this.value);
            this.value++;
        }
    }

    public static void main(String[] args) {
        DebugExample dbg = new DebugExample(5);
        dbg.incrementValue();
        dbg.incrementValue();
        dbg.incrementValue();
    }
}
```
</details>

<details>
<summary><strong>s04_java05_product_class_sol.java</strong></summary>

```java
// Save as: s04_java05_product_class_sol.java
import java.util.Scanner;

public class s04_java05_product_class_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public String getName() {
            return this.name;
        }

        public double getPrice() {
            return this.price;
        }

        public void applyDiscount(double percent) {
            if (percent > 0 && percent < 100) {
                this.price = this.price * (1 - (percent / 100.0));
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();    // e.g. "Book"
        double p = sc.nextDouble(); // e.g. 20
        double d = sc.nextDouble(); // e.g. 25

        Product prod = new Product(n, p);
        prod.applyDiscount(d);

        System.out.println("Discounted price: " + prod.getPrice());
    }
}
```
</details>

## Autotest Scripts

Below are example autotests for one C++ and one Java exercise. Replicate or adapt them for each exercise as needed.

### C++ Autotest Example

**s04_cpp01_oop_basics_test.py**

```python
# Save as: s04_cpp01_oop_basics_test.py
import subprocess

def compile_cpp(source, output):
    proc = subprocess.run(["g++", source, "-o", output], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_exe(executable, input_data=""):
    proc = subprocess.run([f"./{executable}"], input=input_data, text=True, capture_output=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Error running {executable}:\n{proc.stderr}")
    return proc.stdout.strip()

def test_solutions(student_src, student_exe, ref_src, ref_exe):
    compile_cpp(student_src, student_exe)
    compile_cpp(ref_src, ref_exe)

    # No special input needed, just run
    student_out = run_exe(student_exe)
    ref_out = run_exe(ref_exe)

    # We expect "Final count: 3" in both
    if "Final count: 3" not in student_out:
        raise AssertionError(f"Expected 'Final count: 3' in student output:\n{student_out}")
    if "Final count: 3" not in ref_out:
        raise AssertionError(f"Expected 'Final count: 3' in reference output:\n{ref_out}")

    print("All tests passed for s04_cpp01_oop_basics.")

if __name__ == "__main__":
    test_solutions(
        "s04_cpp01_oop_basics.cpp", 
        "s04_cpp01_oop_basics_student", 
        "s04_cpp01_oop_basics_sol.cpp", 
        "s04_cpp01_oop_basics_ref"
    )
```

### Java Autotest Example

**s04_java01_oop_basics_test.py**

```python
# Save as: s04_java01_oop_basics_test.py
import subprocess, os

def compile_java(source):
    proc = subprocess.run(["javac", source], capture_output=True, text=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{proc.stderr}")

def run_java(classname, input_data=""):
    proc = subprocess.run(["java", classname], input=input_data, text=True, capture_output=True)
    if proc.returncode != 0:
        raise RuntimeError(f"Error running {classname}:\n{proc.stderr}")
    return proc.stdout.strip()

def test_solutions(student_src, ref_src):
    compile_java(student_src)
    compile_java(ref_src)

    student_class = os.path.splitext(student_src)[0]
    ref_class = os.path.splitext(ref_src)[0]

    student_out = run_java(student_class)
    ref_out = run_java(ref_class)

    if "Final count: 3" not in student_out:
        raise AssertionError(f"Expected 'Final count: 3' in student output:\n{student_out}")
    if "Final count: 3" not in ref_out:
        raise AssertionError(f"Expected 'Final count: 3' in reference output:\n{ref_out}")

    print("All tests passed for s04_java01_oop_basics.")

if __name__ == "__main__":
    test_solutions("s04_java01_oop_basics.java", "s04_java01_oop_basics_sol.java")
```

## Final Checklist

1. **Detailed, Substantive Explanations:**  
   - Covered classes, access modifiers, instance methods, and reasons behind OOP structure.

2. **All Concepts Introduced Before Use:**  
   - We explained classes, public vs. private, instance methods, then gave exercises that build on them.

3. **5 Exercises per Language:**  
   - Each exercise is named according to the new convention (`s04_cppNN_shortname.cpp`, `s04_javaNN_shortname.java`).

4. **Starter Code in Each Exercise:**  
   - Each exercise includes a code template with `// TODO:` placeholders.

5. **Reference Solutions:**  
   - Provided for each exercise, matching the new naming scheme.

6. **Autotest Scripts:**  
   - Sample Python-based autotests for one C++ and one Java exercise, illustrating compilation and output checking.

7. **Filename Consistency:**  
   - All exercise files, solutions, and tests follow the `s04_cppNN_shortname` / `s04_javaNN_shortname` format.

8. **Links to Trusted Resources:**  
   - Provided references for C++/Java official documentation on classes, access control, and methods.

9. **No Unmet Dependencies:**  
   - Exercises only require knowledge from prior sessions plus newly introduced class/OOP concepts.

10. **Self-Contained Module:**  
    - Session 4 materials include explanations, examples, exercises, solutions, autotests, and references.

Everything needed for Session 4 is here. 

**End of Session 4 Materials**