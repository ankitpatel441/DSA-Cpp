#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    // Ascending order
    sort(arr, arr + n);
    printArr(arr, n);

    // Descending order
    sort(arr, arr + n, greater<int>());
    printArr(arr, n);

    return 0;
}