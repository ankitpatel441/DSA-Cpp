#include <bits/stdc++.h>
using namespace std;

//Brute Force
bool searchSortedMat1(int mat[][4], int key, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == key) {
                cout << "Found at (" << i << "," << j << ")\n";
                return true;
            }
        }
    }

    cout << "Key not found\n";
    return false;
}

//binSearch
bool seacrchSortedMat2(int mat[][4], int n, int m, int key) {
    int start = 0;
    int end = n * m - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        int row = mid / m;
        int col = mid % m;

        if(mat[row][col] == key) {
            cout << "Found at (" << row << "," << col << ")\n";
            return true;
        }

        if(mat[row][col] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Key not found\n";
    return false;
}


bool seacrchSortedMat3(int mat[][4], int n, int m, int key) {
    int i = 0, j = m-1;

    while(i < n &&  j >= 0) {
        if(mat[i][j] == key) {
            cout << "found at call ("  << i << "," << j << ")\n"; 
            return true;
        }  else if (mat[i][j] > key) { //left
            j--;
        } else { //down 
            i++;
        }

    }
    cout << "key not found\n";
    return false;
}

int main()
{
    int mat[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 38}, {32, 33, 39, 50}};

    seacrchSortedMat3(mat, 4, 4, 33);
    return 0;
}