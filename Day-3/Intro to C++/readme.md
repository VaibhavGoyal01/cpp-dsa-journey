# Introduction to C++

C++ is a powerful, high-performance programming language that was developed by Bjarne Stroustrup in 1979 as an extension of the C programming language. C++ is widely used for system/software development, game development, and real-time systems because of its performance and efficiency.

## Key Features of C++

### Object-Oriented Programming (OOP)

C++ supports OOP, which is a programming paradigm based on the concept of objects. Objects represent real-world entities and have attributes (data) and behaviors (functions). The four main principles of OOP in C++ are:

- **Encapsulation**: Bundling data and methods that operate on the data within one unit, like a class.
- **Inheritance**: The ability to create a new class from an existing class, inheriting its attributes and methods.
- **Polymorphism**: The ability to use the same interface for different underlying forms (e.g., function overloading and overriding).
- **Abstraction**: Hiding complex implementation details and showing only the essential features of the object.

### Standard Template Library (STL)

The STL is a powerful feature of C++ that provides a collection of template classes and functions for data structures and algorithms. It includes components like vectors, stacks, queues, and more, which makes coding easier and more efficient.

### Memory Management

C++ gives programmers direct control over memory allocation and deallocation using pointers and dynamic memory management techniques. This allows for the development of high-performance applications but requires careful management to avoid issues like memory leaks.

### Multi-paradigm Language

C++ supports multiple programming paradigms, including procedural, object-oriented, and functional programming, making it a versatile language suitable for various types of software development.

### Low-Level Manipulation

C++ allows for low-level programming by directly interacting with hardware, making it ideal for developing systems software like operating systems, drivers, and embedded systems.

## Basic Syntax of C++

Here’s a simple C++ program that prints "Hello, World!" to the console:

```cpp
#include <iostream>   // Preprocessor directive for input-output stream

int main() {          // Main function, the entry point of the program
    std::cout << "Hello, World!"; // Output statement
    return 0;         // Return statement, indicates the program executed successfully
}

