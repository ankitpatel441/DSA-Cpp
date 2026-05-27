/*
================================================================================
01_Arrays
================================================================================
Arrays: Basics, Traversal, Insertion, Deletion, Searching

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

void printArr(int arr[], int n) {

    for(int i = 0; i<n; i++) {
        cout << arr[i] << ",";
    }
}
int main() {
    // cout << "Welcome to 01_Arrays!" << endl;
    
    // //creating an array
    // int arr[20] = {1, 2, 3, 4};
    // cout << sizeof(arr) << endl;

    // output/input array
//    int n;
//    cout << "enter in length of array :" ;
//    cin >> n;

//    int arr[n];
// //    int n = sizeof(arr) / sizeof(int);

//    for(int i = 0; i<n; i++) {
//     cin >> arr[i];
//    }

//    for(int i = 0; i <= n - 1; i++) {
//     cout << arr[i] << ",";
//    }
    
    // // find largest in array
    // int arr[] = {5, 4, 3, 9, 2};
    // int n = sizeof(arr) / sizeof(int);
    // // int max = arr[0]; //max value
    // int min = arr[0];

    // for(int i=0; i<n; i++) {
    //     if(arr[i] < min) {
    //         min = arr[i];
    //     }
    // }
    // cout << "min : " << min << endl;

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "array of size : " << sizeof(arr) << endl;
    printArr(arr, n);



    return 0;
}
