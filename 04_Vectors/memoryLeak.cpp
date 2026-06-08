#include <iostream>
using namespace std;

int main() {
    // MEMORY LEAK EXAMPLE 1: Allocated memory not freed
    //  Memory Leak Example 1 
    int *ptr1 = new int[100];
    ptr1[0] = 5;
    cout << "Memory allocated but not freed - MEMORY LEAK!" << endl;
    // Missing: delete[] ptr1;
    
    //  Memory Leak Example 2
    // Losing pointer reference
    int *ptr2 = new int(42);
    cout << "Value: " << *ptr2 << endl;
    ptr2 = new int(100);  // Original memory lost, not freed - MEMORY LEAK!
    delete ptr2;
    
    //  Memory Leak Example 3
    // Exception without cleanup
    int *ptr3 = new int[50];
    // If exception occurs here, ptr3 is not deleted - MEMORY LEAK!
    // delete[] ptr3;
    
    //  Proper Memory Management  Example 4
    int *ptr4 = new int[10];
    for(int i = 0; i < 10; i++) {
        ptr4[i] = i;
    }
    cout << "Memory properly managed with delete" << endl;
    delete[] ptr4;  // Properly freed
    ptr4 = nullptr;  // Good practice: set to nullptr after deletion
    
    return 0;
}
