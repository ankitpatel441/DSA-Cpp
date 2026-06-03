#include <bits/stdc++.h>
using namespace std;

void printArr(char arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void charSort(char arr[], int n) {
    for(int i = 1; i < n; i++) {
        char curr = arr[i];
        int prev = i - 1;

        // Descending order
        while(prev >= 0 && arr[prev] < curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
    printArr(ch, n);
}

int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(char);

    charSort(ch, n);

    return 0;
}