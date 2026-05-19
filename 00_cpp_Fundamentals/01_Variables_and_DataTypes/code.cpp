/*
================================================================================
VARIABLES & DATA TYPES
================================================================================
Learn about C++ data types, variable declaration, and memory management.

Topics Covered:
- Primitive data types (int, float, double, char, bool)
- Variable declaration and initialization
- Type casting
- Constants
- Size of data types
- Variable scope

================================================================================
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    cout << "=== VARIABLES & DATA TYPES ===" << endl;
    
    // Integer types
    cout << "\n--- Integer Types ---" << endl;
    int age = 25;
    short small_num = 100;
    long big_num = 1000000000;
    long long very_big = 9223372036854775807LL;
    
    cout << "int age: " << age << endl;
    cout << "short small_num: " << small_num << endl;
    cout << "long big_num: " << big_num << endl;
    cout << "long long very_big: " << very_big << endl;
    
    // Floating point types
    cout << "\n--- Floating Point Types ---" << endl;
    float pi_float = 3.14f;
    double pi_double = 3.14159265359;
    
    cout << "float pi_float: " << pi_float << endl;
    cout << "double pi_double: " << fixed << setprecision(10) << pi_double << endl;
    
    // Character type
    cout << "\n--- Character Type ---" << endl;
    char letter = 'A';
    cout << "char letter: " << letter << " (ASCII: " << (int)letter << ")" << endl;
    
    // Boolean type
    cout << "\n--- Boolean Type ---" << endl;
    bool is_student = true;
    bool has_license = false;
    cout << "is_student: " << is_student << endl;
    cout << "has_license: " << has_license << endl;
    
    // String
    cout << "\n--- String Type ---" << endl;
    string name = "C++";
    cout << "String: " << name << endl;
    
    // Size of data types
    cout << "\n--- Size of Data Types (in bytes) ---" << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(short): " << sizeof(short) << endl;
    cout << "sizeof(long): " << sizeof(long) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    
    // Type casting
    cout << "\n--- Type Casting ---" << endl;
    int intVal = 10;
    double doubleVal = (double)intVal;
    cout << "int to double: " << doubleVal << endl;
    
    float floatVal = 3.7f;
    int intFromFloat = (int)floatVal;
    cout << "float to int: " << intFromFloat << endl;
    
    // Constants
    cout << "\n--- Constants ---" << endl;
    const int CONSTANT_VAL = 100;
    const float PI = 3.14159f;
    cout << "CONSTANT_VAL: " << CONSTANT_VAL << endl;
    cout << "PI: " << PI << endl;
    
    // Variable scope
    cout << "\n--- Variable Scope ---" << endl;
    int global_style = 50;  // Function scope
    {
        int local_var = 25;  // Block scope
        cout << "Inside block - local_var: " << local_var << endl;
    }
    cout << "Outside block - global_style: " << global_style << endl;
    
    return 0;
}
