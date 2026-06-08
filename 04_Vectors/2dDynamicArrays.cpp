#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    // Dynamic 2D array allocation
    int **matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Data store and print
    int x = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //print matrix
    cout << matrix[2][2] << endl;

    // // Memory deallocation
    // for (int i = 0; i < rows; i++) {
    //     delete[] matrix[i];
    // }
    // delete[] matrix;

    return 0;
}