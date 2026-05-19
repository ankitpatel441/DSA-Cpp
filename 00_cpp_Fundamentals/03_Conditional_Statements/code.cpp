/*
================================================================================
CONDITIONAL STATEMENTS
================================================================================
Learn about decision-making structures in C++.

Topics Covered:
- if statement
- if-else statement
- if-else if-else statement
- switch-case statement
- Ternary operator (? :)
- Nested conditions

================================================================================
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== CONDITIONAL STATEMENTS ===" << endl;
    
    // Simple if statement
    cout << "\n--- Simple If Statement ---" << endl;
    int marks = 85;
    if (marks >= 80) {
        cout << "Excellent performance!" << endl;
    }
    
    // If-else statement
    cout << "\n--- If-Else Statement ---" << endl;
    int age = 15;
    if (age >= 18) {
        cout << "You can vote" << endl;
    } else {
        cout << "You cannot vote" << endl;
    }
    
    // If-else if-else statement
    cout << "\n--- If-Else If-Else Statement (Grades) ---" << endl;
    int score = 75;
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    // Switch-case statement
    cout << "\n--- Switch-Case Statement (Days) ---" << endl;
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
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    
    // Ternary operator
    cout << "\n--- Ternary Operator ---" << endl;
    int num = 10;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;
    
    // Nested conditions
    cout << "\n--- Nested Conditions ---" << endl;
    int x = 15;
    if (x > 0) {
        if (x < 20) {
            cout << x << " is between 0 and 20" << endl;
        } else {
            cout << x << " is 20 or greater" << endl;
        }
    } else {
        cout << x << " is zero or negative" << endl;
    }
    
    return 0;
}
