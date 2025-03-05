# Get-Start-With-DSA-C++
# C++ Programs Collection

This repository contains a collection of basic C++ programs that demonstrate fundamental programming concepts.

## Table of Contents
1. [Hello World](#hello-world)
2. [User Input](#user-input)
3. [Even or Odd](#even-or-odd)
4. [Greater Number](#greater-number)
5. [Factorial](#factorial)
6. [Sum of Natural Numbers](#sum-of-natural-numbers)
7. [Swapping Numbers](#swapping-numbers)
8. [Sum of Digits](#sum-of-digits)
9. [Reverse a Number](#reverse-a-number)
10. [Palindrome Check](#palindrome-check)
11. [Simple Calculator](#simple-calculator)
12. [Fibonacci Series](#fibonacci-series)
13. [Prime Number Check](#prime-number-check)
14. [String Reverse](#string-reverse)
15. [Array Operations](#array-operations)
16. [Sorting Algorithms](#sorting-algorithms)

## Programs

### Hello World
Prints "Hello World" to the console.
```cpp
void helloWorld() {
    cout << "Hello World" << endl;
}
```

### User Input
Takes a name as input and prints "Hello <name>".
```cpp
void inputName() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
}
```

### Even or Odd
Checks if a number is even or odd.
```cpp
void evenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
}
```

### Greater Number
Finds the greater of two numbers.
```cpp
void greaterNumber() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << (a > b ? a : b) << " is greater" << endl;
}
```

### Factorial
Finds the factorial of a number.
```cpp
void factorial() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << "Factorial: " << fact << endl;
}
```

### Sum of Natural Numbers
Finds the sum of first N natural numbers.
```cpp
void sumNaturalNumbers() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) sum += i;
    cout << "Sum: " << sum << endl;
}
```

### Swapping Numbers
Swaps two numbers using and without using a temporary variable.
```cpp
void swapNumbers() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a; a = b; b = temp;
    cout << "Swapped: " << a << " " << b << endl;
}
```
```cpp
void swapWithoutTemp() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b; b = a - b; a = a - b;
    cout << "Swapped: " << a << " " << b << endl;
}
```

### Sum of Digits
Finds the sum of digits of a number.
```cpp
void sumOfDigits() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) { sum += n % 10; n /= 10; }
    cout << "Sum of digits: " << sum << endl;
}
```

### Reverse a Number
Reverses a given number.
```cpp
void reverseNumber() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    cout << "Reversed: " << rev << endl;
}
```

### Palindrome Check
Checks if a number is a palindrome.
```cpp
void palindromeNumber() {
    int n, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    cout << (temp == rev ? "Palindrome" : "Not a palindrome") << endl;
}
```

### Simple Calculator
Performs basic arithmetic operations.
```cpp
void calculator() {
    char op; float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator"; break;
    }
    cout << endl;
}
```

### Fibonacci Series
Prints the Fibonacci series up to N terms.
```cpp
void fibonacci() {
    int n, a = 0, b = 1, c;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci series: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b; cout << c << " ";
        a = b; b = c;
    }
    cout << endl;
}
```

### Prime Number Check
Checks if a number is prime.
```cpp
void primeNumber() {
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) { flag = 0; break; }
    }
    cout << (flag ? "Prime" : "Not prime") << endl;
}
```

### Array Operations
Finds the largest and smallest element in an array, reverses an array.

### Sorting Algorithms
Implements Bubble Sort, Selection Sort, and Insertion Sort.

## Usage
Compile the program using a C++ compiler like g++:
```sh
g++ program.cpp -o program
./program
```

## License
This project is open-source and free to use.

