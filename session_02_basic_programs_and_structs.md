```bash
# Run this command to create all required files for Session 2.
touch \
exercise_s2_cpp1.cpp exercise_s2_cpp1_sol.cpp exercise_s2_cpp1_test.py \
exercise_s2_cpp2.cpp exercise_s2_cpp2_sol.cpp exercise_s2_cpp2_test.py \
exercise_s2_cpp3.cpp exercise_s2_cpp3_sol.cpp exercise_s2_cpp3_test.py \
exercise_s2_cpp4.cpp exercise_s2_cpp4_sol.cpp exercise_s2_cpp4_test.py \
exercise_s2_cpp5.cpp exercise_s2_cpp5_sol.cpp exercise_s2_cpp5_test.py \
exercise_s2_java1.java exercise_s2_java1_sol.java exercise_s2_java1_test.py \
exercise_s2_java2.java exercise_s2_java2_sol.java exercise_s2_java2_test.py \
exercise_s2_java3.java exercise_s2_java3_sol.java exercise_s2_java3_test.py \
exercise_s2_java4.java exercise_s2_java4_sol.java exercise_s2_java4_test.py \
exercise_s2_java5.java exercise_s2_java5_sol.java exercise_s2_java5_test.py
```

### Concepts Covered in Session 2

**Exploring Basic Programs, Minimal Structures**  

In this session, we move beyond simple procedural code and introduce:

1. **Basic Functions**:  
   - How to define and call functions in both C++ and Java.  
   - Understanding function parameters and return values.  
   - How functions improve code organization and reusability.

2. **Minimal Data Structures (struct in C++ and a simple class in Java)**:  
   - Introducing a simple `struct` in C++ that groups related variables.  
   - Introducing a basic class in Java that holds data fields and possibly a method or two to operate on them, without full OOP complexity yet.  
   - Understand how these basic structures differ from mere variables and help organize data.

3. **Compile/Link Steps in C++ and javac/java Execution Model in Java**:  
   - Review how `g++` compiles `.cpp` files into object files and links them into an executable.  
   - Discuss how `javac` compiles `.java` files into `.class` files, and how `java` runs those bytecode files.  
   - Understand the difference between a linker in C++ and the JVM class loader in Java.

4. **Introduction to Debugging**:  
   - Basic debugging techniques using print statements.  
   - Mention tools like `gdb` for C++ and how one might debug in Java using print statements or an IDE’s debugger.  
   - Highlight the importance of systematically checking assumptions about code behavior.

**By the end of this session**, learners will be comfortable writing small programs composed of multiple functions, understand the very basics of structs/classes as data containers, and know how to compile, link, and run these programs in C++ and Java. They’ll also appreciate the concept of debugging early in their coding journey.

### Detailed, Substantive Explanations

#### Defining and Using Functions

**Why Functions?**  
Functions allow you to break down complex tasks into smaller, reusable units. They improve code clarity, facilitate testing, and make it easier to modify parts of a program without affecting others.

**C++ Functions:**  

- Syntax:
  ```cpp
  return_type functionName(parameter_list) {
      // function body
      return some_value; // if return_type is not void
  }
  ```

- Example:
  ```cpp
  int add(int x, int y) {
      return x + y;
  }
  
  int main() {
      int result = add(3, 4);
      std::cout << "Sum: " << result << std::endl;
      return 0;
  }
  ```
  
- Note: You can have `void` functions that return nothing, and you can declare functions before `main()` or in a separate `.h` file and define them in a `.cpp` file.

**Java Methods (Functions Inside Classes):**  

- In Java, functions are called methods and must be defined inside a class.
- Syntax:
  ```java
  public static return_type methodName(parameter_list) {
      // method body
      return some_value; // if return_type != void
  }
  ```
  
- Example:
  ```java
  public class Example {
      public static int add(int x, int y) {
          return x + y;
      }
      
      public static void main(String[] args) {
          int result = add(3, 4);
          System.out.println("Sum: " + result);
      }
  }
  ```

**Parameters and Return Values:**
- Parameters let you pass data into a function, and return values allow a function to send data back.
- Functions can be used to structure logic. For example, `int max(int a, int b)` returns the larger of two integers.

#### Minimal Data Structures: struct in C++ and a Simple Class in Java

**C++ struct:**

- A `struct` groups related variables under one name.
- Syntax:
  ```cpp
  struct Item {
      std::string name;
      double price;
  };
  ```

- You can then create variables of type `Item`:
  ```cpp
  Item apple;
  apple.name = "Apple";
  apple.price = 0.5;
  std::cout << apple.name << " costs " << apple.price << std::endl;
  ```

**Java Class:**

- In Java, you define a class:
  ```java
  public class Item {
      String name;
      double price;
  }
  ```
  
- Create and use an `Item`:
  ```java
  Item apple = new Item();
  apple.name = "Apple";
  apple.price = 0.5;
  System.out.println(apple.name + " costs " + apple.price);
  ```

- Difference from C++: In Java, you must instantiate with `new`. Also, all non-primitive fields are references.

**Why These Structures?**  
They help manage related data as a single unit, making programs more organized and less error-prone as complexity grows.

#### Compilation and Linking (C++) vs. javac/java (Java)

**C++:**

- Typically:
  1. `g++ -c file1.cpp` → produces `file1.o`
  2. `g++ -c file2.cpp` → produces `file2.o`
  3. `g++ file1.o file2.o -o program` → links object files into an executable.
  
- One-step compile and link:
  ```bash
  g++ main.cpp item.cpp -o program
  ```
  
- Linking resolves references between object files. If `main.cpp` calls a function defined in `item.cpp`, the linker combines them.

**Java:**

- `javac Item.java` → produces `Item.class`
- `javac Main.java` → produces `Main.class`
- `java Main` → runs the Main class on the JVM.
  
- No separate “link” step like in C++. The JVM dynamically loads classes as needed at runtime.

#### Debugging Basics

- **Print Statements:**  
  Insert `std::cout << "Debug: x = " << x << std::endl;` in C++ or `System.out.println("Debug: x = " + x);` in Java to check variable values at runtime.

- **GDB (C++):**  
  You can run `gdb ./program`, set breakpoints, step through code, and inspect variables.  
  (In-depth debugging will come later, but knowing it exists is helpful.)

- **Java Debugging:**  
  Use `System.out.println` or an IDE’s debugger (e.g., Eclipse, IntelliJ) to set breakpoints and inspect variables.

**Key Takeaway:**  
Start with simple print-debugging, and as you grow more experienced, you’ll use advanced tools.

### Official Documentation & Trusted Resources

- C++ Functions:
  [https://en.cppreference.com/w/cpp/language/functions](https://en.cppreference.com/w/cpp/language/functions)

- C++ Struct:
  [https://en.cppreference.com/w/cpp/language/struct](https://en.cppreference.com/w/cpp/language/struct)

- Java Methods:
  [https://docs.oracle.com/javase/tutorial/java/javaOO/methods.html](https://docs.oracle.com/javase/tutorial/java/javaOO/methods.html)

- Java Classes:
  [https://docs.oracle.com/javase/tutorial/java/javaOO/classes.html](https://docs.oracle.com/javase/tutorial/java/javaOO/classes.html)

### Exercises

**Overview:**  
We have 5 exercises for C++ and 5 for Java. These exercises focus on defining and using functions, creating and using a simple struct/class, and understanding compilation. Each exercise includes starter code. Afterwards, reference solutions and autotests are provided.

#### C++ Exercises (5 Exercises)

##### Exercise S2 C++1: Simple Function Definition
**Goal:** Define a function that returns the maximum of two integers.

- **Instructions:**  
  1. Define a function `int maxInt(int a, int b)` that returns the larger of `a` and `b`.  
  2. In `main`, read two integers, call `maxInt`, and print the result.

- **Input (Example):**  
  ```
  3 5
  ```
- **Output (Example):**  
  ```
  5
  ```

```cpp
// Save as: exercise_s2_cpp1.cpp
#include <iostream>
// TODO: Define int maxInt(int a, int b) here

int main() {
    int a, b;
    std::cin >> a >> b;
    // TODO: Call maxInt(a, b) and print the returned value
    return 0;
}
```

##### Exercise S2 C++2: Void Function for Printing
**Goal:** Create a function `void printLine()` that prints a line of dashes.

- **Instructions:**  
  1. Define `void printLine()` that prints "----------" (10 dashes) and a newline.  
  2. In `main`, call `printLine()` three times.

- **No Input**
- **Output (Example):**  
  ```
  ----------
  ----------
  ----------
  ```

```cpp
// Save as: exercise_s2_cpp2.cpp
#include <iostream>
// TODO: Define void printLine() that prints a line of dashes

int main() {
    // TODO: Call printLine() three times
    return 0;
}
```

##### Exercise S2 C++3: Using a struct
**Goal:** Define a struct `Item` with `std::string name` and `double price`. Create an Item and print its fields.

- **Instructions:**  
  1. Define `struct Item { std::string name; double price; };`  
  2. In `main`, create an `Item`, read its `name` and `price` from input, then print: "`name` costs `price`".

- **Input (Example):**  
  ```
  Apple 0.5
  ```
- **Output (Example):**  
  ```
  Apple costs 0.5
  ```

```cpp
// Save as: exercise_s2_cpp3.cpp
#include <iostream>
#include <string>
// TODO: Define struct Item with name and price

int main() {
    // TODO: Create an Item, read name and price, print the result
    return 0;
}
```

##### Exercise S2 C++4: Function + Struct
**Goal:** Write a function that takes an `Item` and prints it.

- **Instructions:**  
  1. Use the same `struct Item` as above.  
  2. Define `void printItem(const Item &it)` that prints "`it.name` costs `it.price`".  
  3. In `main`, read an Item’s data, call `printItem(item)`.

- **Input (Example):**  
  ```
  Banana 1.2
  ```
- **Output (Example):**  
  ```
  Banana costs 1.2
  ```

```cpp
// Save as: exercise_s2_cpp4.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

// TODO: Define void printItem(const Item &it)

int main() {
    // TODO: Read an Item (name and price), call printItem
    return 0;
}
```

##### Exercise S2 C++5: Debugging With Print Statements
**Goal:** Insert print statements to trace the execution of a simple calculation.

- **Instructions:**  
  1. Define a function `int multiplyByTwo(int x)` that prints "Debug: multiplying X by 2" before returning `x * 2`.  
  2. In `main`, read an integer, call `multiplyByTwo`, print the final result.

- **Input (Example):**  
  ```
  5
  ```
- **Output (Example):**  
  ```
  Debug: multiplying 5 by 2
  10
  ```

```cpp
// Save as: exercise_s2_cpp5.cpp
#include <iostream>

// TODO: Define int multiplyByTwo(int x) with a debug print before returning x*2

int main() {
    int val;
    std::cin >> val;
    // TODO: Call multiplyByTwo(val), print result
    return 0;
}
```


#### Java Exercises (5 Exercises)

##### Exercise S2 Java1: Simple Method Definition
**Goal:** Define a static method that returns the maximum of two integers.

- **Instructions:**  
  1. Define `public static int maxInt(int a, int b)` in the class.  
  2. In `main`, read two integers, call `maxInt`, and print the result.

- **Input (Example):**  
  ```
  3 5
  ```
- **Output (Example):**  
  ```
  5
  ```

```java
// Save as: exercise_s2_java1.java
import java.util.Scanner;

public class exercise_s2_java1 {
    // TODO: Define public static int maxInt(int a, int b)
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        // TODO: Call maxInt and print the result
    }
}
```

##### Exercise S2 Java2: Void Method for Printing
**Goal:** Create a method `printLine()` that prints a line of dashes, call it multiple times.

- **Instructions:**  
  1. Define `public static void printLine()` that prints 10 dashes.  
  2. In `main`, call it three times.

- **No Input**
- **Output (Example):**  
  ```
  ----------
  ----------
  ----------
  ```

```java
// Save as: exercise_s2_java2.java

public class exercise_s2_java2 {
    // TODO: Define public static void printLine()
    
    public static void main(String[] args) {
        // TODO: Call printLine() three times
    }
}
```

##### Exercise S2 Java3: Basic Class Usage
**Goal:** Create a class `Item` with `String name; double price;`, instantiate it, and print its fields.

- **Instructions:**  
  1. Define `class Item` inside this file.  
  2. In `main`, create an `Item`, set name and price from input, print "`name` costs `price`".

- **Input (Example):**  
  ```
  Apple 0.5
  ```
- **Output (Example):**  
  ```
  Apple costs 0.5
  ```

```java
// Save as: exercise_s2_java3.java
import java.util.Scanner;

public class exercise_s2_java3 {
    // TODO: Define class Item { String name; double price; }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: Create an Item, read name and price, print the result
    }
}
```

##### Exercise S2 Java4: Method + Class
**Goal:** Write a static method `printItem(Item it)` that prints the Item’s details.

- **Instructions:**  
  1. Use the same `Item` class as above.  
  2. Define `public static void printItem(Item it)` that prints "`it.name` costs `it.price`".  
  3. In `main`, read an Item’s data, call `printItem(it)`.

- **Input (Example):**  
  ```
  Banana 1.2
  ```
- **Output (Example):**  
  ```
  Banana costs 1.2
  ```

```java
// Save as: exercise_s2_java4.java
import java.util.Scanner;

public class exercise_s2_java4 {
    static class Item {
        String name;
        double price;
    }
    
    // TODO: Define public static void printItem(Item it)
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: Create an Item, read name/price, call printItem(it)
    }
}
```

##### Exercise S2 Java5: Debugging with Print Statements
**Goal:** Insert print statements to trace execution.

- **Instructions:**  
  1. Define `public static int multiplyByTwo(int x)` that prints "Debug: multiplying X by 2".  
  2. Return `x*2`.  
  3. In `main`, read an integer, call `multiplyByTwo`, print the result.

- **Input (Example):**  
  ```
  5
  ```
- **Output (Example):**  
  ```
  Debug: multiplying 5 by 2
  10
  ```

```java
// Save as: exercise_s2_java5.java
import java.util.Scanner;

public class exercise_s2_java5 {
    // TODO: Define public static int multiplyByTwo(int x) with debug print

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // TODO: read val, call multiplyByTwo(val), print result
    }
}
```

### Reference Solutions

**C++ Solutions:**

```cpp
// Save as: exercise_s2_cpp1_sol.cpp
#include <iostream>
int maxInt(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int a,b;
    std::cin >> a >> b;
    std::cout << maxInt(a,b) << std::endl;
    return 0;
}
```

```cpp
// Save as: exercise_s2_cpp2_sol.cpp
#include <iostream>
void printLine() {
    std::cout << "----------" << std::endl;
}
int main() {
    printLine();
    printLine();
    printLine();
    return 0;
}
```

```cpp
// Save as: exercise_s2_cpp3_sol.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

int main() {
    Item it;
    std::cin >> it.name >> it.price;
    std::cout << it.name << " costs " << it.price << std::endl;
    return 0;
}
```

```cpp
// Save as: exercise_s2_cpp4_sol.cpp
#include <iostream>
#include <string>

struct Item {
    std::string name;
    double price;
};

void printItem(const Item &it) {
    std::cout << it.name << " costs " << it.price << std::endl;
}

int main() {
    Item it;
    std::cin >> it.name >> it.price;
    printItem(it);
    return 0;
}
```

```cpp
// Save as: exercise_s2_cpp5_sol.cpp
#include <iostream>

int multiplyByTwo(int x) {
    std::cout << "Debug: multiplying " << x << " by 2" << std::endl;
    return x * 2;
}

int main() {
    int val;
    std::cin >> val;
    std::cout << multiplyByTwo(val) << std::endl;
    return 0;
}
```

**Java Solutions:**

```java
// Save as: exercise_s2_java1_sol.java
import java.util.Scanner;

public class exercise_s2_java1_sol {
    public static int maxInt(int a, int b) {
        return (a > b) ? a : b;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(maxInt(a,b));
    }
}
```

```java
// Save as: exercise_s2_java2_sol.java
public class exercise_s2_java2_sol {
    public static void printLine() {
        System.out.println("----------");
    }
    public static void main(String[] args) {
        printLine();
        printLine();
        printLine();
    }
}
```

```java
// Save as: exercise_s2_java3_sol.java
import java.util.Scanner;

public class exercise_s2_java3_sol {
    static class Item {
        String name;
        double price;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Item it = new Item();
        it.name = sc.next();
        it.price = sc.nextDouble();
        System.out.println(it.name + " costs " + it.price);
    }
}
```

```java
// Save as: exercise_s2_java4_sol.java
import java.util.Scanner;

public class exercise_s2_java4_sol {
    static class Item {
        String name;
        double price;
    }

    public static void printItem(Item it) {
        System.out.println(it.name + " costs " + it.price);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Item it = new Item();
        it.name = sc.next();
        it.price = sc.nextDouble();
        printItem(it);
    }
}
```

```java
// Save as: exercise_s2_java5_sol.java
import java.util.Scanner;

public class exercise_s2_java5_sol {
    public static int multiplyByTwo(int x) {
        System.out.println("Debug: multiplying " + x + " by 2");
        return x * 2;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int val = sc.nextInt();
        System.out.println(multiplyByTwo(val));
    }
}
```

### Autotest Scripts

**Note:** Similar to previous sessions, we show one example for each language. The others would follow a similar pattern, using different inputs as needed.

**C++ Autotest Example (exercise_s2_cpp1):**

```python
# Save as: exercise_s2_cpp1_test.py
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

    test_cases = [
        ("3 5\n", "5"),
        ("10 2\n", "10"),
        ("-1 -2\n", "-1")
    ]

    for input_data, _ in test_cases:
        student_out = run_exe(student_exe, input_data)
        ref_out = run_exe(ref_exe, input_data)
        if student_out != ref_out:
            raise AssertionError(f"For input '{input_data.strip()}': Expected {ref_out}, got {student_out}")

    print("All tests passed.")

if __name__ == "__main__":
    test_solutions("exercise_s2_cpp1.cpp", "exercise_s2_cpp1_student", "exercise_s2_cpp1_sol.cpp", "exercise_s2_cpp1_ref")
```

**Java Autotest Example (exercise_s2_java1):**

```python
# Save as: exercise_s2_java1_test.py
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
    compile_java(student_src)
    compile_java(ref_src)

    student_class = os.path.splitext(student_src)[0]
    ref_class = os.path.splitext(ref_src)[0]

    test_cases = [
        ("3 5\n", "5"),
        ("10 2\n", "10"),
        ("-1 -2\n", "-1")
    ]

    for input_data, _ in test_cases:
        student_out = run_java(student_class, input_data)
        ref_out = run_java(ref_class, input_data)
        if student_out != ref_out:
            raise AssertionError(f"For input '{input_data.strip()}': Expected {ref_out}, got {student_out}")

    print("All tests passed.")

if __name__ == "__main__":
    test_solutions("exercise_s2_java1.java", "exercise_s2_java1_sol.java")
```

**Similar test scripts apply for the other exercises**, adapting input data accordingly.

### Final Checklist

- **Detailed, Substantive Explanations:**  
  Covered functions, struct/class basics, compilation/linking, debugging with examples and rationale.

- **All Concepts Explained Before Use:**  
  Functions, structs/classes, compilation steps are explained before appearing in exercises.

- **5–6 Exercises per Language:**  
  Provided 5 exercises for C++ and 5 for Java, each tied closely to the concepts.

- **Starter Code in Each Exercise:**  
  Each exercise has a code block with `// TODO:` comments for the student to fill in.

- **Reference Solutions Provided:**  
  Each exercise has a corresponding `_sol` file.

- **Autotests Provided:**  
  Example test scripts are shown. The pattern can be repeated for all exercises.

- **Filenames and Naming Conventions:**  
  Filenames match the instructions (e.g., `exercise_s2_cpp1.cpp`, `exercise_s2_cpp1_sol.cpp`, etc.).

- **Links to Official Documentation:**  
  Provided links to cppreference and Oracle docs for functions, methods, classes, and structs.

- **No Unmet Dependencies:**  
  We have not used any concept not introduced. The exercises build on previously learned concepts.

- **Self-Contained Materials:**  
  Explanations → Exercises (with starter code) → Solutions → Tests are all here.

All criteria met.

**End of Session 2 Materials**