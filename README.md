# cpp07 - ex00

The `template <typename T>` syntax in C++ is used to define a template, which allows you to create functions, classes, or structures that work with different data types without being rewritten for each type.

Here's a brief explanation:

### Template :

A template in C++ provides a way to create generic, reusable code. Instead of writing multiple versions of the same function or class for different data types, you can use templates to handle different types with a single piece of code.

### Syntax and Usage

1. **Function Template:**

   A function template allows you to define a function that can operate on different data types.

   ```cpp
   template <typename T>
   T add(T a, T b) {
       return a + b;
   }
   ```

   In this example, `add` is a function template that takes two parameters of type `T` and returns their sum. When you call `add` with specific types (e.g., `int` or `double`), the compiler generates the appropriate function.

   ```cpp
   int main() {
       int result1 = add(5, 3);       // T is int
       double result2 = add(4.5, 2.3); // T is double
   }
   ```

2. **Class Template:**

   A class template allows you to define a class that can operate with different data types.

   ```cpp
   template <typename T>
   class Box {
   private:
       T value;
   public:
       Box(T v) : value(v) {}
       T getValue() { return value; }
   };
   ```

   In this example, `Box` is a class template that holds a value of type `T`. You can create instances of `Box` with different types.

   ```cpp
   int main() {
       Box<int> intBox(123);       // T is int
       Box<double> doubleBox(45.67); // T is double
       std::cout << intBox.getValue() << std::endl;
       std::cout << doubleBox.getValue() << std::endl;
   }
   ```
