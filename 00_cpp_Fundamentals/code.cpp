/*
================================================================================
C++ FUNDAMENTALS
================================================================================
Complete guide to C++ programming basics including:
- Variables & Data Types
- Operators
- Conditional Statements
- Loops
- Patterns
- Functions
- Binary Number System
- Introduction to Pointers

================================================================================
SECTION 1: VARIABLES & DATA TYPES
================================================================================
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Data type examples
void section_variables_datatypes() {
    cout << "\n=== 1. Variables & Data Types ===" << endl;
    
    // Integer types
    int age = 25;
    long bigNumber = 1000000000;
    short smallNumber = 100;
    
    // Floating point types
    float pi = 3.14f;
    double precise_pi = 3.14159265359;
    
    // Character type
    char letter = 'A';
    
    // Boolean type
    bool isTrue = true;
    
    // String
    string name = "C++";
    
    cout << "Integer: " << age << endl;
    cout << "Float: " << pi << endl;
    cout << "Double: " << precise_pi << endl;
    cout << "Char: " << letter << endl;
    cout << "Boolean: " << isTrue << endl;
    cout << "String: " << name << endl;
}

/*
================================================================================
SECTION 2: OPERATORS
================================================================================
*/

void section_operators() {
    cout << "\n=== 2. Operators ===" << endl;
    
    int a = 10, b = 5;
    
    // Arithmetic operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;      // Addition
    cout << "a - b = " << (a - b) << endl;      // Subtraction
    cout << "a * b = " << (a * b) << endl;      // Multiplication
    cout << "a / b = " << (a / b) << endl;      // Division
    cout << "a % b = " << (a % b) << endl;      // Modulus
    
    // Relational operators
    cout << "\nRelational Operators:" << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    
    // Logical operators
    cout << "\nLogical Operators:" << endl;
    cout << "true && false: " << (true && false) << endl;  // AND
    cout << "true || false: " << (true || false) << endl;  // OR
    cout << "!true: " << (!true) << endl;                  // NOT
    
    // Assignment operators
    cout << "\nAssignment Operators:" << endl;
    int x = 10;
    cout << "x = 10, then x += 5: ";
    x += 5;
    cout << x << endl;
}

/*
================================================================================
SECTION 3: CONDITIONAL STATEMENTS
================================================================================
*/

void section_conditional() {
    cout << "\n=== 3. Conditional Statements ===" << endl;
    
    int marks = 75;
    
    // If-else
    cout << "If-Else:" << endl;
    if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: C" << endl;
    }
    
    // Switch case
    cout << "\nSwitch Case:" << endl;
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Other day" << endl;
    }
    
    // Ternary operator
    cout << "\nTernary Operator:" << endl;
    int age = 20;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << status << endl;
}

/*
================================================================================
SECTION 4: LOOPS
================================================================================
*/

void section_loops() {
    cout << "\n=== 4. Loops ===" << endl;
    
    // For loop
    cout << "For Loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop
    cout << "\nWhile Loop (counting down from 5):" << endl;
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << endl;
    
    // Do-while loop
    cout << "\nDo-While Loop:" << endl;
    int n = 1;
    do {
        cout << n << " ";
        n++;
    } while (n <= 3);
    cout << endl;
}

/*
================================================================================
SECTION 5: PATTERNS
================================================================================
*/

void section_patterns() {
    cout << "\n=== 5. Patterns ===" << endl;
    
    // Square pattern
    cout << "Square (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Triangle pattern
    cout << "\nTriangle:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Number pyramid
    cout << "\nNumber Pyramid:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
================================================================================
SECTION 6: FUNCTIONS
================================================================================
*/

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function with default parameters
void greet(string name = "Friend") {
    cout << "Hello, " << name << "!" << endl;
}

// Function with multiple return values using reference
void divide(int a, int b, int &quotient, int &remainder) {
    quotient = a / b;
    remainder = a % b;
}

void section_functions() {
    cout << "\n=== 6. Functions ===" << endl;
    
    // Simple function call
    cout << "Addition: " << add(10, 5) << endl;
    
    // Function with default parameters
    cout << "With default parameter: ";
    greet();
    cout << "With custom parameter: ";
    greet("Alice");
    
    // Function with reference parameters
    int q, r;
    divide(17, 5, q, r);
    cout << "Division: 17 / 5 = " << q << " remainder " << r << endl;
}

/*
================================================================================
SECTION 7: BINARY NUMBER SYSTEM
================================================================================
*/

void section_binary() {
    cout << "\n=== 7. Binary Number System ===" << endl;
    
    int decimal = 10;
    
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: ";
    
    // Convert to binary
    int temp = decimal;
    string binary = "";
    while (temp > 0) {
        binary = (char)('0' + (temp % 2)) + binary;
        temp /= 2;
    }
    cout << binary << endl;
    
    // Bitwise operations
    cout << "\nBitwise Operations:" << endl;
    int a = 5, b = 3;
    cout << "a & b (AND): " << (a & b) << endl;      // 101 & 011 = 001
    cout << "a | b (OR): " << (a | b) << endl;       // 101 | 011 = 111
    cout << "a ^ b (XOR): " << (a ^ b) << endl;      // 101 ^ 011 = 110
    cout << "~a (NOT): " << (~a) << endl;
    cout << "a << 1 (Left Shift): " << (a << 1) << endl;   // 101 << 1 = 1010
    cout << "a >> 1 (Right Shift): " << (a >> 1) << endl;  // 101 >> 1 = 010
}

/*
================================================================================
SECTION 8: INTRODUCTION TO POINTERS
================================================================================
*/

void section_pointers() {
    cout << "\n=== 8. Introduction to Pointers ===" << endl;
    
    int value = 42;
    int *ptr = &value;  // Pointer to int
    
    cout << "Value: " << value << endl;
    cout << "Address of value: " << &value << endl;
    cout << "Pointer ptr: " << ptr << endl;
    cout << "Dereferenced pointer (*ptr): " << *ptr << endl;
    
    // Modifying value through pointer
    *ptr = 100;
    cout << "After modification: value = " << value << endl;
    
    // Pointer to pointer
    int **pptr = &ptr;
    cout << "\nPointer to pointer (**pptr): " << **pptr << endl;
}

/*
================================================================================
MAIN FUNCTION
================================================================================
*/

int main() {
    cout << "========================================" << endl;
    cout << "    C++ FUNDAMENTALS LEARNING GUIDE     " << endl;
    cout << "========================================" << endl;
    
    // Run all sections
    section_variables_datatypes();
    section_operators();
    section_conditional();
    section_loops();
    section_patterns();
    section_functions();
    section_binary();
    section_pointers();
    
    cout << "\n========================================" << endl;
    cout << "       Thanks for learning C++!        " << endl;
    cout << "========================================" << endl;
    
    return 0;
}
