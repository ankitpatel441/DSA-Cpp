/*
================================================================================
OPERATORS
================================================================================
Explore different types of operators in C++.

Topics Covered:
- Arithmetic operators (+, -, *, /, %)
- Relational operators (==, !=, <, >, <=, >=)
- Logical operators (&&, ||, !)
- Assignment operators (=, +=, -=, etc.)
- Bitwise operators (&, |, ^, ~, <<, >>)
- Increment/Decrement operators (++, --)
- Ternary operator (? :)

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== OPERATORS ===" << endl;
    
    int a = 10, b = 5;
    
    // Arithmetic operators
    cout << "\n--- Arithmetic Operators ---" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    // Relational operators
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    // Logical operators
    cout << "\n--- Logical Operators ---" << endl;
    cout << "true && false: " << (true && false) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "!true: " << (!true) << endl;
    
    // Assignment operators
    cout << "\n--- Assignment Operators ---" << endl;
    int x = 10;
    cout << "x = " << x << endl;
    x += 5;  // x = x + 5
    cout << "x += 5: " << x << endl;
    x -= 3;  // x = x - 3
    cout << "x -= 3: " << x << endl;
    x *= 2;  // x = x * 2
    cout << "x *= 2: " << x << endl;
    x /= 4;  // x = x / 4
    cout << "x /= 4: " << x << endl;
    
    // Bitwise operators
    cout << "\n--- Bitwise Operators ---" << endl;
    int num1 = 5;   // 101 in binary
    int num2 = 3;   // 011 in binary
    cout << "num1 = " << num1 << " (binary: 101)" << endl;
    cout << "num2 = " << num2 << " (binary: 011)" << endl;
    cout << "num1 & num2 (AND): " << (num1 & num2) << endl;
    cout << "num1 | num2 (OR): " << (num1 | num2) << endl;
    cout << "num1 ^ num2 (XOR): " << (num1 ^ num2) << endl;
    cout << "~num1 (NOT): " << (~num1) << endl;
    cout << "num1 << 1 (Left Shift): " << (num1 << 1) << endl;
    cout << "num1 >> 1 (Right Shift): " << (num1 >> 1) << endl;
    
    // Increment/Decrement operators
    cout << "\n--- Increment/Decrement Operators ---" << endl;
    int count = 5;
    cout << "count = " << count << endl;
    cout << "++count (pre-increment): " << (++count) << endl;
    cout << "count++: " << (count++) << endl;
    cout << "after count++, count = " << count << endl;
    cout << "--count (pre-decrement): " << (--count) << endl;
    
    // Ternary operator
    cout << "\n--- Ternary Operator ---" << endl;
    int age = 20;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Age: " << age << " -> Status: " << status << endl;
    
    return 0;
}
