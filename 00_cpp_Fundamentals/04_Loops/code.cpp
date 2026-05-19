/*
================================================================================
LOOPS
================================================================================
Learn about repetition structures in C++.

Topics Covered:
- For loop
- While loop
- Do-while loop
- Loop control statements (break, continue)
- Nested loops

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== LOOPS ===" << endl;
    
    // For loop - basic
    cout << "\n--- For Loop (1 to 5) ---" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // For loop - sum of numbers
    cout << "\n--- For Loop (Sum of 1 to 5) ---" << endl;
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    
    // While loop
    cout << "\n--- While Loop (Countdown from 5) ---" << endl;
    int n = 5;
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;
    
    // Do-while loop
    cout << "\n--- Do-While Loop ---" << endl;
    int count = 1;
    do {
        cout << count << " ";
        count++;
    } while (count <= 3);
    cout << endl;
    
    // Break statement
    cout << "\n--- Break Statement ---" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break;
        cout << i << " ";
    }
    cout << endl;
    
    // Continue statement
    cout << "\n--- Continue Statement (Skip Even) ---" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) continue;
        cout << i << " ";
    }
    cout << endl;
    
    // Nested loops
    cout << "\n--- Nested Loops ---" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    
    // Multiplication table
    cout << "\n--- Multiplication Table (3x3) ---" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
