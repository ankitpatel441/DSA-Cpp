#include <bits/stdc++.h>
using namespace std;

// void func1(int mat[][3], int n, int m) {
//     cout << "0th row ptr" << mat << endl;
//     cout << "0th row ptr" << mat+1 << endl;
//     cout << "0th row ptr" << mat+2 << endl;
// }

void func2(int (*mat)[3], int n, int m) {
    // cout << "0th row ptr" << mat << endl;
    // cout << "0th row ptr" << mat+1 << endl;
    // cout << "0th row ptr" << mat+2 << endl;

    cout << *(*(mat + 2) + 1) << endl;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // func1(mat, 3, 3);
    func2(mat, 3, 3);

    return 0;
}