#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) {
    int sRow = 0, eRow = n - 1;
    int sCom = 0, eCom = m - 1;

    while (sRow <= eRow && sCom <= eCom) {

        // top
        for(int j = sCom; j <= eCom; j++) {
            cout << mat[sRow][j] << " ";
        }

        // right
        for(int i = sRow + 1; i <= eRow; i++) {
            cout << mat[i][eCom] << " ";
        }

        // bottom
        for(int j = eCom - 1; j >= sCom; j--) {
            if(sRow == eRow) break;
            cout << mat[eRow][j] << " ";
        }

        // left
        for(int i = eRow - 1; i >= sRow + 1; i--) {
            if(sCom == eCom) break;
            cout << mat[i][sCom] << " ";
        }

        sRow++;
        eRow--;
        sCom++;
        eCom--;
    }

    cout << endl;
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralMatrix(mat, 4, 4);

    return 0;
}