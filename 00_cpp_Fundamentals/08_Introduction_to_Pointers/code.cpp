/*
================================================================================
INTRODUCTION TO POINTERS
================================================================================
Learn the basics of pointers and memory management.

Topics Covered:
- Pointer declaration and initialization
- Address-of operator (&)
- Dereference operator (*)
- Null pointers
- Pointer to pointer
- Arrays and pointers
- Dynamic memory allocation

================================================================================
*/

#include <iostream>
using namespace std;

// // pass by value
// void changeA(int a) {
//     a = 20;
//     cout << a << "\n";
// }

// // pass by reference using pointer
// void changeB(int *ptr) {
//     *ptr = 20;
//     cout << *ptr << "\n";
// }

// // pass by reference using pointer
// void changeB(int *ptr) {
//     *ptr = 20;
//     cout << *ptr << "\n";
// }

// pass by reference using reference variables
void changeA(int &a) {
    a = 20;
    cout << a << "\n";
}

int main() {

    // // Basic pointer
    // int a = 10;

    // cout << &a << endl;

    // int *ptr = &a;

    // cout << &a << " = " << ptr << endl;

    // float pi = 3.14;

    // float *ptr2 = &pi;

    // cout << ptr2 << endl;

    // // Character array (string)
    // string str = "sadsd";

    // string* ptr3 = &str;

    // cout << ptr3 << endl;   // address
    // cout << *ptr3 << endl;  // value

    // Pointer to pointer
    // int b = 5;

    // int *ptr4 = &b;

    // int **pptr = &ptr4;

    // cout << pptr << endl;

//    Dereference Operator
    //   int a = 10;
    //   int *ptr = &a;

    //   cout << ptr << endl;
    //   cout << *ptr << endl;
      
    //   //NUll  pointer
    //   int *ptr =  NULL;
    //   cout << ptr << endl;
    //   cout << *ptr << endl; //segmentation error

    // int a = 10;
    // int b = 20;

    // changeA(a);
    // changeB(&b);

    // cout << "A: " << a << endl;
    // cout << "B: " << b << endl;

    int a = 10;
    // int &b; // error
    changeA(a);
    cout << a << endl;

    return 0;
}