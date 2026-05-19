/*
================================================================================
FUNCTIONS
================================================================================
Learn about function definition, parameters, and return values.

Topics Covered:
- Function declaration and definition
- Parameters and arguments
- Return types
- Function overloading
- Default parameters
- Pass by value and reference

================================================================================
*/

#include<iostream>
using namespace std;

// //- Function declaration and definition
// void seyHello() { //declaration
//     cout << "hello cpp!\n"; //definition
// }

// Parameters and arguments
// int sum(int a, int b) {// a, b are Parameters
//     int  sum = a + b;
//     return sum;

// }

//Function overloading
int sum(int a, int b) {
    cout << (a+b)  << endl;
}

double sum (double a, double b)  {
    cout << (a+b) << endl;
}

int main() {
    sum(2, 3);
    sum(1.5, 2.5);
      

    return 0;
}
