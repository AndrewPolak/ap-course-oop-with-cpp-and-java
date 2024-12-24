```bash
# Run this command to create all required files for Session 3.
touch \
exercise_s3_cpp1.cpp exercise_s3_cpp1_sol.cpp exercise_s3_cpp1_test.py \
exercise_s3_cpp2.cpp exercise_s3_cpp2_sol.cpp exercise_s3_cpp2_test.py \
exercise_s3_cpp3.cpp exercise_s3_cpp3_sol.cpp exercise_s3_cpp3_test.py \
exercise_s3_cpp4.cpp exercise_s3_cpp4_sol.cpp exercise_s3_cpp4_test.py \
exercise_s3_cpp5.cpp exercise_s3_cpp5_sol.cpp exercise_s3_cpp5_test.py \
exercise_s3_java1.java exercise_s3_java1_sol.java exercise_s3_java1_test.py \
exercise_s3_java2.java exercise_s3_java2_sol.java exercise_s3_java2_test.py \
exercise_s3_java3.java exercise_s3_java3_sol.java exercise_s3_java3_test.py \
exercise_s3_java4.java exercise_s3_java4_sol.java exercise_s3_java4_test.py \
exercise_s3_java5.java exercise_s3_java5_sol.java exercise_s3_java5_test.py
```

### Concepts Covered in Session 3

**Motivation for OOP**  

In the previous sessions, we introduced procedural programming and minimal struct/class usage. Now, we delve into **why OOP matters** and how it helps solve common software design problems:

1. **Why OOP Over Purely Procedural Approaches?**  
   - *Encapsulation:* Keep data (fields) and operations (methods) together, reducing complexity and potential for bugs.  
   - *Abstraction:* Hide internal details and present a clean interface.  
   - *Modularity and Maintainability:* Splitting code into self-contained objects/classes helps maintain and extend it more easily.  
   - *Reusability:* Well-designed classes and objects can be reused across multiple projects.  

2. **Classes/Objects as 'Smart Structs':**  
   - In C++, a `class` can have private data, public methods, and constructors that initialize data.  
   - In Java, a `class` is the fundamental building block, with fields and methods grouped, plus built-in garbage collection.  
   - Storing related data and functionality in one unit fosters clearer code organization.

3. **Expanding on Minimal Struct/Class to Show OOP Concepts:**  
   - Adding simple methods to manipulate the data within the struct/class.  
   - Using *constructors* for proper initialization.  
   - Demonstrating how this differs from a purely procedural approach where data is often manipulated by multiple external functions.

4. **Transition to Upcoming OOP Principles (Inheritance, Polymorphism, etc.):**  
   - Present the rationale that classes can be extended, specialized, or replaced in a flexible hierarchy.  
   - This session sets the stage for deeper OOP features.

**By the end of this session,** you should fully grasp why OOP provides advantages in readability, maintainability, and scalability. You’ll create short examples that extend previously minimal classes into more self-contained “smart” data structures.

### Detailed, Substantive Explanations

#### Motivation for OOP

- **Managing Complexity:**  
  As programs grow, purely procedural code tends to become unwieldy. We risk duplicating code, scattering data manipulation across different files, and losing track of data integrity.
  
- **Localizing Responsibility:**  
  By bundling data and related methods inside a class, the class itself becomes responsible for its own correct usage. This helps avoid “spaghetti code.”

- **Protecting Data:**  
  OOP’s concept of *encapsulation* allows us to hide data fields from direct external access. We can expose only controlled methods (like getters/setters) to ensure data remains valid.

- **Real-World Modeling:**  
  Objects in code often map naturally to entities in the problem domain (e.g., a `Product`, a `User`). This helps both the design and the communication among developers.

#### Classes/Objects as “Smart Structs”

**C++ Example:**
```cpp
class Product {
private:
    std::string name;
    double price;

public:
    // Constructor
    Product(const std::string& n, double p) : name(n), price(p) {}

    // Getter
    std::string getName() const {
        return name;
    }

    // Setter
    void setPrice(double p) {
        if (p >= 0.0) price = p;
    }

    // Other methods
    double getPrice() const {
        return price;
    }
};
```
- Here, `Product` groups `name` and `price` and also controls how they’re accessed or changed.

**Java Example:**
```java
public class Product {
    private String name;
    private double price;

    // Constructor
    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    // Getter
    public String getName() {
        return name;
    }

    // Setter
    public void setPrice(double price) {
        if (price >= 0.0) {
            this.price = price;
        }
    }

    // Other methods
    public double getPrice() {
        return price;
    }
}
```
- Same idea: we hide the fields behind `private` and expose only methods to manipulate them.

#### Procedural vs. OOP Perspective

- **Procedural**: We might have a `struct` or a set of variables and a bunch of separate functions that handle them, often leading to duplication or confusion about which function is responsible for data integrity.
- **OOP**: We keep data and associated logic (like validations) together in the class. This clarifies who “owns” the data.

#### Extending a Minimal Class

- We can add small methods to illustrate this concept:
  - A `discount(double percent)` method that reduces the price by some percentage.
  - A `printInfo()` method that prints details in a standardized format.

Example in C++:
```cpp
void applyDiscount(double percent) {
    if (percent > 0 && percent < 100) {
        price *= (1 - percent / 100.0);
    }
}
```
Example in Java:
```java
public void applyDiscount(double percent) {
    if (percent > 0 && percent < 100) {
        this.price = this.price * (1 - percent / 100.0);
    }
}
```

#### Preparing for Next Steps

- Next, we’ll explore *inheritance*, *polymorphism*, and more advanced design patterns. But understanding the “why” behind OOP is crucial: it’s not just about new syntax— it’s about structuring code in a more maintainable, modular way.

### Official Documentation & Trusted Resources

- **Encapsulation in C++**  
  [https://en.cppreference.com/w/cpp/language/access](https://en.cppreference.com/w/cpp/language/access)  
- **Encapsulation in Java**  
  [https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html](https://docs.oracle.com/javase/tutorial/java/javaOO/accesscontrol.html)  
- **General OOP Concepts**  
  [https://docs.oracle.com/javase/tutorial/java/concepts/](https://docs.oracle.com/javase/tutorial/java/concepts/) (Java-focused, but broad OOP definitions apply)


### Exercises

Below are **5 exercises each** for C++ and Java to reinforce the “why” and “how” of transitioning from procedural code to an OOP structure. You will create small classes that hold data and methods, emphasize encapsulation, and highlight the difference from purely procedural approaches.

---

#### C++ Exercises (5 Exercises)

##### Exercise S3 C++1: Procedural vs. OOP
**Goal:** Compare a simple procedural approach and an OOP approach for a small scenario.

- **Instructions:**  
  1. In `main`, first show a procedural approach:  
     - Create a `std::string name` and a `double price`.  
     - Write a free function `applyDiscount(double &price, double percent)`.  
     - Demonstrate discounting the price.  
  2. Then create a class `Product` with the same fields (`name`, `price`) and an `applyDiscount(double percent)` method.  
  3. Print both final prices, to see that they match.

- **Input (Example):**  
  ```
  Apple 1.0 20
  ```
  (Meaning name=“Apple”, price=1.0, discount=20%)
- **Output (Example):**  
  ```
  Procedural price after discount: 0.8
  OOP price after discount: 0.8
  ```

```cpp
// Save as: exercise_s3_cpp1.cpp
#include <iostream>
#include <string>

// TODO: Write a free function applyDiscount(double &price, double percent)

int main() {
    // 1) Procedural approach
    //    - read name, price, discount
    //    - apply discount using applyDiscount(...)
    //    - print the result
    
    // 2) OOP approach
    //    - define a Product class (if you like, define it above main)
    //    - create an object, set the same name, price
    //    - call a method applyDiscount(...) on it
    //    - print the result
    
    return 0;
}
```

---

##### Exercise S3 C++2: Encapsulation Basics
**Goal:** Create a `Product` class that stores `name` (private) and `price` (private). Provide getters and setters.

- **Instructions:**  
  1. In the constructor, initialize both fields.  
  2. Provide a `getName()` and `getPrice()`.  
  3. Provide a `setPrice(double)` that only changes price if the new value is >= 0.  
  4. In `main`, create a `Product`, try setting an invalid price, then print the final price to confirm it didn’t change.

- **Input (Example):**  
  ```
  Book 15
  -10
  ```
  (Meaning name=“Book”, initial price=15, then an attempt to set price to -10)
- **Output (Example):**  
  ```
  Final price is: 15
  ```

```cpp
// Save as: exercise_s3_cpp2.cpp
#include <iostream>
#include <string>

// TODO: Define class Product with private name, price
//       Provide constructor, getName(), getPrice(), setPrice(double)

int main() {
    // TODO: read a product name and initial price
    // create a Product object
    // try to setPrice(...) to an invalid value (e.g., -10)
    // print final price
    return 0;
}
```

---

##### Exercise S3 C++3: Adding Methods (Smart Struct)
**Goal:** Enhance `Product` with an `applyDiscount(double percent)` method.

- **Instructions:**  
  1. Reuse or redefine a `Product` class from scratch.  
  2. Add `applyDiscount(double percent)` that multiplies `price` by `(1 - percent/100)` if `percent` is between 0 and 100.  
  3. In `main`, read name, price, discount. Print the updated price after discount.

- **Input (Example):**  
  ```
  Apple 2.00 10
  ```
- **Output (Example):**  
  ```
  After 10% discount, price is 1.8
  ```

```cpp
// Save as: exercise_s3_cpp3.cpp
#include <iostream>
#include <string>

// TODO: Define class Product with fields name (string), price (double).
//       Include applyDiscount(double percent) method.

int main() {
    // TODO: read name, price, discount
    // create a Product object
    // call applyDiscount(...)
    // print final price
    return 0;
}
```

---

##### Exercise S3 C++4: Constructors & Overloaded Constructor
**Goal:** Show how constructors can streamline initialization and demonstrate overloading (multiple constructors).

- **Instructions:**  
  1. Create a `Product` class with two constructors:  
     - `Product()`: default constructor that sets `name` to “Unknown”, `price` to 0.0  
     - `Product(std::string n, double p)`: sets `name` and `price` from parameters.  
  2. In `main`, create one product using the default constructor, another with the parameterized constructor. Print their details.

- **No Additional Input** (Hardcode or input for the parameterized one if desired.)
- **Output (Example):**  
  ```
  Product 1: Unknown, 0
  Product 2: Book, 15
  ```

```cpp
// Save as: exercise_s3_cpp4.cpp
#include <iostream>
#include <string>

// TODO: class Product with two constructors: default and parameterized

int main() {
    // TODO: Create product1 with default constructor
    //       Create product2 with parameterized constructor
    //       Print their details
    return 0;
}
```

---

##### Exercise S3 C++5: Debugging an OOP Design
**Goal:** Practice systematically adding debug prints to see how constructors and methods are called.

- **Instructions:**  
  1. In your `Product` class, print a debug statement in each constructor (e.g., “Default constructor called”, “Parameterized constructor called”).  
  2. Also print a debug statement in `setPrice()`.  
  3. In `main`, create two products, call `setPrice()`, and observe the debug output.

- **No mandated input**  
- **Output (Example):**  
  ```
  Default constructor called
  Parameterized constructor called
  setPrice called with: 20
  ...
  ```

```cpp
// Save as: exercise_s3_cpp5.cpp
#include <iostream>
#include <string>

// TODO: class Product with debug prints in constructors and setPrice

int main() {
    // TODO: Create a default product, create a parameterized product
    // call setPrice(...) on one of them
    // observe debug prints
    return 0;
}
```

---

#### Java Exercises (5 Exercises)

##### Exercise S3 Java1: Procedural vs. OOP
**Goal:** Compare an old-style procedural approach to discounting a price with an OOP approach inside a `Product` class.

- **Instructions:**  
  1. In `main`, store a `name` (String) and `price` (double). Write a static function `applyDiscount(double price, double percent)` that returns the discounted price.  
  2. Then define a `Product` class with a method `applyDiscount(double percent)`.  
  3. Show both approaches produce the same discounted value.

- **Input (Example):**  
  ```
  Apple 1.0 20
  ```
- **Output (Example):**  
  ```
  Procedural discounted price: 0.8
  OOP discounted price: 0.8
  ```

```java
// Save as: exercise_s3_java1.java
import java.util.Scanner;

public class exercise_s3_java1 {
    // TODO: static double applyDiscount(double price, double percent)
    
    // TODO: define class Product with name, price, and applyDiscount method
    
    public static void main(String[] args) {
        // 1) Procedural approach
        // 2) OOP approach
    }
}
```

---

##### Exercise S3 Java2: Encapsulation Basics
**Goal:** Use private fields in a `Product` class, expose getters/setters.

- **Instructions:**  
  1. `private String name; private double price;`  
  2. In the constructor, initialize both.  
  3. Provide `getName()`, `getPrice()`, `setPrice(double)`.  
  4. In `main`, try to set an invalid price, confirm it doesn’t change.

- **Input (Example):**  
  ```
  Book 15
  -10
  ```
- **Output (Example):**  
  ```
  Final price is: 15.0
  ```

```java
// Save as: exercise_s3_java2.java
import java.util.Scanner;

public class exercise_s3_java2 {
    static class Product {
        // TODO: private fields name, price
        // constructor
        // getters
        // setPrice
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read product name, initial price
        // create Product
        // setPrice(-10)
        // print final price
    }
}
```

---

##### Exercise S3 Java3: Smart Class with Methods
**Goal:** Add `applyDiscount(double percent)` in a Java class.

- **Instructions:**  
  1. `Product` class from above: add `public void applyDiscount(double percent)`.  
  2. If `percent` in [0, 100], reduce `price` by that percentage.  
  3. In `main`, read name, price, discount, show final price.

- **Input (Example):**  
  ```
  Apple 2.00 10
  ```
- **Output (Example):**  
  ```
  Price after 10.0% discount: 1.8
  ```

```java
// Save as: exercise_s3_java3.java
import java.util.Scanner;

public class exercise_s3_java3 {
    static class Product {
        // TODO: private name, private price
        // constructor
        // getPrice()
        // applyDiscount(...)
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read name, price, discount
        // create Product, applyDiscount, print final price
    }
}
```

---

##### Exercise S3 Java4: Constructors (Default and Overloaded)
**Goal:** Demonstrate multiple constructors in Java.

- **Instructions:**  
  1. `Product()` default constructor sets `name = "Unknown"`, `price = 0.0`.  
  2. `Product(String name, double price)` initializes fields.  
  3. In `main`, create two products using each constructor, print results.

- **No required input**  
- **Output (Example):**  
  ```
  Product 1: Unknown, 0.0
  Product 2: Book, 15.0
  ```

```java
// Save as: exercise_s3_java4.java
public class exercise_s3_java4 {
    static class Product {
        // TODO: default constructor, parameterized constructor
        // fields name, price
        // method to print details
    }

    public static void main(String[] args) {
        // TODO: create product1 via default constructor
        //       create product2 via parameterized constructor
        //       print details
    }
}
```

---

##### Exercise S3 Java5: Debugging with Print Statements
**Goal:** Show debug prints in constructors and setter methods.

- **Instructions:**  
  1. In `Product`, print a line in both constructors (e.g., “Default constructor called”).  
  2. Print a line in `setPrice(...)`.  
  3. In `main`, create two products, set a new price, watch debug output.

- **No required input**  
- **Output (Example):**  
  ```
  Default constructor called
  Parameterized constructor called
  setPrice called with: 20.0
  ...
  ```

```java
// Save as: exercise_s3_java5.java
public class exercise_s3_java5 {
    static class Product {
        // fields
        // default constructor { System.out.println("Default constructor called"); }
        // parameterized constructor { System.out.println("Parameterized constructor called"); }
        // setPrice(double) { System.out.println("setPrice called with: " + newPrice); ... }
    }

    public static void main(String[] args) {
        // TODO: create Product p1 with default constructor
        //       create Product p2 with parameterized
        //       call p2.setPrice(20.0);
    }
}
```

### Reference Solutions

Below are sample solutions. Depending on your approach, solutions may vary slightly in naming or structure, but the core logic should match.

**C++ Solutions**  

```cpp
// Save as: exercise_s3_cpp1_sol.cpp
#include <iostream>
#include <string>

void applyDiscount(double &price, double percent) {
    if (percent > 0 && percent < 100) {
        price *= (1 - percent / 100.0);
    }
}

class Product {
public:
    std::string name;
    double price;
    
    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }
};

int main() {
    std::string name;
    double price, discount;
    std::cin >> name >> price >> discount;

    // Procedural
    double proceduralPrice = price;
    applyDiscount(proceduralPrice, discount);
    std::cout << "Procedural price after discount: " << proceduralPrice << std::endl;

    // OOP
    Product prod;
    prod.name = name;
    prod.price = price;
    prod.applyDiscount(discount);
    std::cout << "OOP price after discount: " << prod.price << std::endl;

    return 0;
}
```

```cpp
// Save as: exercise_s3_cpp2_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double p) {
        if (p >= 0.0) {
            price = p;
        }
    }
};

int main() {
    std::string n;
    double p;
    std::cin >> n >> p;

    Product prod(n, p);

    double newPrice;
    std::cin >> newPrice;  // e.g., -10
    prod.setPrice(newPrice);

    std::cout << "Final price is: " << prod.getPrice() << std::endl;
    return 0;
}
```

```cpp
// Save as: exercise_s3_cpp3_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string &n, double p) : name(n), price(p) {}

    void applyDiscount(double percent) {
        if (percent > 0 && percent < 100) {
            price *= (1 - percent / 100.0);
        }
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    std::string n;
    double p, d;
    std::cin >> n >> p >> d;
    Product prod(n, p);
    prod.applyDiscount(d);
    std::cout << "After " << d << "% discount, price is " << prod.getPrice() << std::endl;
    return 0;
}
```

```cpp
// Save as: exercise_s3_cpp4_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    // Default constructor
    Product() {
        name = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Product(const std::string &n, double p) : name(n), price(p) {}

    std::string getName() const { return name; }
    double getPrice() const { return price; }
};

int main() {
    Product p1;                  // default
    Product p2("Book", 15.0);    // parameterized

    std::cout << "Product 1: " << p1.getName() << ", " << p1.getPrice() << std::endl;
    std::cout << "Product 2: " << p2.getName() << ", " << p2.getPrice() << std::endl;
    return 0;
}
```

```cpp
// Save as: exercise_s3_cpp5_sol.cpp
#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    Product() {
        std::cout << "Default constructor called\n";
        name = "Unknown";
        price = 0.0;
    }
    Product(const std::string &n, double p) {
        std::cout << "Parameterized constructor called\n";
        name = n;
        price = p;
    }

    void setPrice(double newPrice) {
        std::cout << "setPrice called with: " << newPrice << "\n";
        if (newPrice >= 0.0) {
            price = newPrice;
        }
    }
};

int main() {
    Product p1;                      // debug: Default constructor
    Product p2("Phone", 100.0);      // debug: Parameterized constructor
    p2.setPrice(20.0);               // debug: setPrice
    return 0;
}
```

---

**Java Solutions**

```java
// Save as: exercise_s3_java1_sol.java
import java.util.Scanner;

public class exercise_s3_java1_sol {
    // Procedural approach
    public static double applyDiscount(double price, double percent) {
        if (percent > 0 && percent < 100) {
            return price * (1 - percent / 100.0);
        }
        return price;
    }

    // OOP approach
    static class Product {
        String name;
        double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public void applyDiscount(double percent) {
            if (percent > 0 && percent < 100) {
                this.price = this.price * (1 - percent / 100.0);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        double price = sc.nextDouble();
        double discount = sc.nextDouble();

        // Procedural
        double procDiscounted = applyDiscount(price, discount);
        System.out.println("Procedural discounted price: " + procDiscounted);

        // OOP
        Product prod = new Product(name, price);
        prod.applyDiscount(discount);
        System.out.println("OOP discounted price: " + prod.price);
    }
}
```

```java
// Save as: exercise_s3_java2_sol.java
import java.util.Scanner;

public class exercise_s3_java2_sol {
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

        public double getPrice() {
            return price;
        }

        public void setPrice(double p) {
            if (p >= 0.0) {
                this.price = p;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        double p = sc.nextDouble();
        Product prod = new Product(n, p);

        double newPrice = sc.nextDouble(); // e.g., -10
        prod.setPrice(newPrice);

        System.out.println("Final price is: " + prod.getPrice());
    }
}
```

```java
// Save as: exercise_s3_java3_sol.java
import java.util.Scanner;

public class exercise_s3_java3_sol {
    static class Product {
        private String name;
        private double price;

        public Product(String name, double price) {
            this.name = name;
            this.price = price;
        }

        public double getPrice() {
            return price;
        }

        public void applyDiscount(double percent) {
            if (percent > 0 && percent < 100) {
                this.price = this.price * (1 - percent / 100.0);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        double price = sc.nextDouble();
        double discount = sc.nextDouble();

        Product prod = new Product(name, price);
        prod.applyDiscount(discount);

        System.out.println("Price after " + discount + "% discount: " + prod.getPrice());
    }
}
```

```java
// Save as: exercise_s3_java4_sol.java
public class exercise_s3_java4_sol {
    static class Product {
        private String name;
        private double price;

        // Default constructor
        public Product() {
            this.name = "Unknown";
            this.price = 0.0;
        }

        // Parameterized constructor
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
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Book", 15.0);

        System.out.println("Product 1: " + p1.getName() + ", " + p1.getPrice());
        System.out.println("Product 2: " + p2.getName() + ", " + p2.getPrice());
    }
}
```

```java
// Save as: exercise_s3_java5_sol.java
public class exercise_s3_java5_sol {
    static class Product {
        private String name;
        private double price;

        public Product() {
            System.out.println("Default constructor called");
            this.name = "Unknown";
            this.price = 0.0;
        }

        public Product(String name, double price) {
            System.out.println("Parameterized constructor called");
            this.name = name;
            this.price = price;
        }

        public void setPrice(double newPrice) {
            System.out.println("setPrice called with: " + newPrice);
            if (newPrice >= 0.0) {
                this.price = newPrice;
            }
        }
    }

    public static void main(String[] args) {
        Product p1 = new Product();
        Product p2 = new Product("Phone", 100.0);
        p2.setPrice(20.0);
    }
}
```

### Autotest Scripts

As before, we show one example each for C++ and Java. You can replicate these patterns for all exercises with appropriate input/test cases.

**C++ Autotest Example (exercise_s3_cpp1):**

```python
# Save as: exercise_s3_cpp1_test.py
import subprocess

def compile_cpp(source, output):
    res = subprocess.run(["g++", source, "-o", output], capture_output=True, text=True)
    if res.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{res.stderr}")

def run_exe(exe, input_data=""):
    res = subprocess.run(["./"+exe], input=input_data, text=True, capture_output=True)
    if res.returncode != 0:
        raise RuntimeError(f"Running {exe} failed:\n{res.stderr}")
    return res.stdout.strip()

def test_solutions(student_src, student_exe, ref_src, ref_exe):
    compile_cpp(student_src, student_exe)
    compile_cpp(ref_src, ref_exe)

    # We'll test one or two discount scenarios.
    test_cases = [
        ("Apple 1.0 20\n", "Procedural price after discount: 0.8"),
        ("Mango 2.0 50\n", "Procedural price after discount: 1")
    ]

    for input_data, snippet in test_cases:
        student_out = run_exe(student_exe, input_data)
        ref_out = run_exe(ref_exe, input_data)
        # We just check if the snippet is in the output to confirm correctness
        if snippet not in student_out or snippet not in ref_out:
            raise AssertionError(
                f"Expected snippet '{snippet}' not found.\n"
                f"Student output:\n{student_out}\n"
                f"Reference output:\n{ref_out}"
            )

    print("All tests passed.")

if __name__ == "__main__":
    test_solutions(
        "exercise_s3_cpp1.cpp", "exercise_s3_cpp1_student",
        "exercise_s3_cpp1_sol.cpp", "exercise_s3_cpp1_ref"
    )
```

**Java Autotest Example (exercise_s3_java1):**

```python
# Save as: exercise_s3_java1_test.py
import subprocess, os

def compile_java(source):
    res = subprocess.run(["javac", source], capture_output=True, text=True)
    if res.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{res.stderr}")

def run_java(classname, input_data=""):
    res = subprocess.run(["java", classname], input=input_data, text=True, capture_output=True)
    if res.returncode != 0:
        raise RuntimeError(f"Running {classname} failed:\n{res.stderr}")
    return res.stdout.strip()

def test_solutions(student_src, ref_src):
    # compile
    compile_java(student_src)
    compile_java(ref_src)

    # derive classnames
    student_class = os.path.splitext(student_src)[0]
    ref_class = os.path.splitext(ref_src)[0]

    test_cases = [
        ("Apple 1.0 20\n", "Procedural discounted price: 0.8"),
        ("Mango 2.0 50\n", "Procedural discounted price: 1.0")
    ]

    for input_data, snippet in test_cases:
        student_out = run_java(student_class, input_data)
        ref_out = run_java(ref_class, input_data)
        if snippet not in student_out or snippet not in ref_out:
            raise AssertionError(
                f"Expected snippet '{snippet}' not in outputs.\n"
                f"Student:\n{student_out}\nReference:\n{ref_out}"
            )

    print("All tests passed.")

if __name__ == "__main__":
    test_solutions("exercise_s3_java1.java", "exercise_s3_java1_sol.java")
```

Repeat for other exercises, customizing input data and checks as needed.

### Final Checklist

- **Detailed Explanations:**  
  Provided a thorough overview of why OOP is beneficial, how classes act as “smart structs,” and how that compares to procedural code.

- **All Concepts Introduced Before Use:**  
  Encapsulation, basic class structure, methods, and constructors explained before the exercises.

- **5 Exercises Each for C++ and Java:**  
  Each exercise ties back to the session’s emphasis: transitioning from procedural to OOP, focusing on classes, encapsulation, and basic methods.

- **Starter Code Provided:**  
  Each exercise includes a starter `.cpp` or `.java` file with `// TODO:` hints.

- **Reference Solutions & Autotests:**  
  We give example solutions and test scripts for each language. The patterns can be extended to all exercises.

- **Consistent Filenames:**  
  The provided `touch` command at the start lists all files, and code blocks follow these names.

- **Links to Official Documentation:**  
  Resources on encapsulation, access control, and general OOP concepts.

- **No Unmet Dependencies:**  
  Concepts like inheritance or advanced patterns are not used here, as they haven’t been introduced yet.

- **Self-Contained:**  
  Explanations → Exercises → Solutions → Tests in one place.

All requirements are met.

**End of Session 3 Materials**