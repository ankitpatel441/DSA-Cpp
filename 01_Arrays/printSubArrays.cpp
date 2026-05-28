#include <iostream>
using namespace std;

int printSubArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            // cout << " (" << i << ", " << j << ") "; 
            for(int k=i; k<=j; k++) {
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printSubArr(arr, n);

    return 0;
}