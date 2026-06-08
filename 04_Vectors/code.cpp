/*
================================================================================
04_Vectors
================================================================================
Vectors: Dynamic Arrays, Common Operations

Key Concepts:
- 
- 
- 

Topics to Cover:
- 
- 
- 

================================================================================
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    //sratic Memory Allocation
    int arr[100] = {1, 2, 3, 4, 5};

    //Dynamic Memory Allocation
    int size;
    cin >> size;

    int *arr1 = new int[size]; 

    int x = 1; 
    for(int i=0; i<size; i++) {
        arr1[i] = x;
        cout << arr1[i] << " ";
        x++;
    }
    
    return 0;
}
