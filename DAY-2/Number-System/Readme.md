# Number Systems 

Number systems are fundamental in computer science and coding, as they define how data is represented and manipulated in computers. This guide will explain various number systems, their importance in coding, and how they are used in different programming scenarios.

## 1. What is a Number System?

A number system is a writing system for expressing numbers; it is a mathematical notation for representing numbers of a given set, using digits or symbols in a consistent manner. The most common number systems used in computing include:

- **Binary (Base-2)**
- **Decimal (Base-10)**
- **Hexadecimal (Base-16)**
- **Octal (Base-8)**

Each system has a different base or radix, which determines the number of unique digits it uses.

## 2. The Binary Number System (Base-2)

**Definition:** The binary system uses only two digits: 0 and 1. It is the most fundamental number system in computing because computers operate on binary logic.

### Usage in Coding:

- **Data Representation:** All data in a computer is ultimately represented in binary. For example, each character in a text file is stored as a binary number (ASCII or Unicode).
- **Boolean Logic:** Logical operations (AND, OR, NOT, XOR) use binary values.
- **Bitwise Operations:** In languages like C, Python, and Java, bitwise operations manipulate data at the bit level, crucial for performance optimization and low-level programming.

### Example:

- Decimal 5 in binary is `101`.
- `5 (decimal) = 1*(2^2) + 0*(2^1) + 1*(2^0) = 4 + 0 + 1 = 5`.

### Conversion Example (Decimal to Binary):

To convert 10 (decimal) to binary:

1. Divide 10 by 2 → Quotient: 5, Remainder: 0
2. Divide 5 by 2 → Quotient: 2, Remainder: 1
3. Divide 2 by 2 → Quotient: 1, Remainder: 0
4. Divide 1 by 2 → Quotient: 0, Remainder: 1

**Binary:** `1010`

## 3. The Decimal Number System (Base-10)

**Definition:** The decimal system is the standard system for denoting integer and non-integer numbers. It uses ten digits: 0 through 9.

### Usage in Coding:

- **User Interfaces:** Most user-facing applications display numbers in decimal because it's the most familiar system to humans.
- **Arithmetic Operations:** Basic arithmetic operations in most programming languages (addition, subtraction, multiplication, division) are based on the decimal system.

### Example:

- The number `123` in decimal is represented directly as `123` in most programming languages.

## 4. The Hexadecimal Number System (Base-16)

**Definition:** The hexadecimal system uses sixteen digits: 0-9 and A-F, where A represents 10, B represents 11, and so on up to F, which represents 15.

### Usage in Coding:

- **Memory Addressing:** Hexadecimal is often used in programming for memory addresses because it is more compact than binary.
- **Color Codes:** In web development, colors are often represented in hexadecimal format (e.g., `#FFFFFF` for white).
- **Data Representation:** Hexadecimal is used to represent binary data more efficiently.

### Example:

- The binary number `1111 0000` can be more easily read as `F0` in hexadecimal.

### Conversion Example (Binary to Hexadecimal):

**Binary:** `1010 1100`

1. Split into two 4-bit sections: `1010` and `1100`
2. Convert to hex: `A` and `C`

**Hexadecimal:** `AC`

## 5. The Octal Number System (Base-8)

**Definition:** The octal system uses eight digits: 0-7. It is less commonly used today but was once prevalent in early computing.

### Usage in Coding:

- **File Permissions in Unix/Linux:** Octal is used to represent file permissions in Unix and Linux systems.
- **Legacy Systems:** Some older systems and applications may still use octal numbers.

### Example:

- The decimal number `8` is represented as `10` in octal.

### Conversion Example (Binary to Octal):

**Binary:** `110101`

1. Split into groups of three: `110` and `101`
2. Convert to octal: `6` and `5`

**Octal:** `65`

## 6. Converting Between Number Systems

Understanding how to convert between number systems is crucial for coding, especially when debugging or working with low-level data.

- **Binary to Decimal:** Sum the products of each binary digit with its corresponding power of 2.
- **Decimal to Binary:** Divide the decimal number by 2, record the remainder, and continue until the quotient is zero.
- **Binary to Hexadecimal:** Group binary digits into sets of four, then convert each set to its hexadecimal equivalent.
- **Hexadecimal to Binary:** Convert each hex digit to its four-bit binary equivalent.
