# cpp07 - ex00
------

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
## ex01
------
The `void (*function)(int &element)` parameter in your `iter` function template is crucial for making the `iter` function flexible and reusable.

### Why Use a Function Pointer

**Apply Different Operations:**

   - The function pointer allows `iter` to apply different operations to the elements of the array. For example, you might want to print the elements, square them, or perform other operations. Passing a function pointer makes it possible to use `iter` for all these purposes.

**Example of Different Functions:**

   Here's how you might use `iter` with different functions:

   ```cpp
   #include <iostream>

   // Function to print each element
   void printElement(int &elem) {
       std::cout << elem << " ";
   }

   // Function to square each element
   void squareElement(int &elem) {
       elem *= elem;
   }

   // Generic iter function
   void iter(int *array, size_t length, void (*function)(int &element)) {
       if (array == NULL || function == NULL)
           return;

       for (size_t i = 0; i < length; i++)
           function(array[i]);
   }

   int main() {
       int intArray[] = {1, 2, 3, 4, 5};
       size_t length = sizeof(intArray) / sizeof(intArray[0]);

       // Print original array
       std::cout << "Original array: ";
       iter(intArray, length, printElement);
       std::cout << std::endl;

       // Square elements
       iter(intArray, length, squareElement);

       // Print squared array
       std::cout << "Squared array: ";
       iter(intArray, length, printElement);
       std::cout << std::endl;

       return 0;
   }
   ```

In this example, `printElement` and `squareElement` are different functions passed to `iter`. `iter` calls these functions on each element of the array.



By using a function pointer, you make the `iter` function adaptable to different processing needs, enhancing its versatility and utility in your code.

## ex02
------

1. **`Array.hpp`**: Combine the header and implementation for the `Array` class template.
2. **`Array.tpp`**: Defines the template member functions (though this is optional if `Array.hpp` is used for both declaration and definition).
3. **`main.cpp`**: Contains test code.

The `operator[]` function in the Array class is used to access elements in the array using subscript notation (array[index]).
