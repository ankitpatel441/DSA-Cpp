#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to 2D_Arrays!" << endl;

    // 2D_Arrays
    // int arr[3][3] = {{99, 98, 97}, {89, 88, 87}, {79, 78, 77}};
    // cout << arr[2][2] << endl;

    // Input & Output 2D Array
    int arr[3][4];
    int n = 3, m = 4;

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;   // Move to next row
    }

    return 0;
}