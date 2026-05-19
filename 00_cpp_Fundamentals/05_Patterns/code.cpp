/*
================================================================================
PATTERNS
================================================================================
Learn to create various patterns using loops.

Topics Covered:
- Star patterns
- Number patterns
- Character patterns
- Pyramid patterns
- Diamond patterns

================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== PATTERNS ===" << endl;
    
    // Rectangle pattern
    cout << "\n--- Rectangle Pattern (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Triangle pattern
    cout << "\n--- Triangle Pattern ---" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Inverted triangle
    cout << "\n--- Inverted Triangle ---" << endl;
    for (int i = 4; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Number pyramid
    cout << "\n--- Number Pyramid ---" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    // Diamond pattern
    cout << "\n--- Diamond Pattern ---" << endl;
    int n = 4;
    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = 0; j < (2 * i + 1); j++) cout << "*";
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = 0; j < (2 * i - 1); j++) cout << "*";
        cout << endl;
    }
    
    // Hollow rectangle
    cout << "\n--- Hollow Rectangle (4x6) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 0 || i == 3 || j == 0 || j == 5) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
