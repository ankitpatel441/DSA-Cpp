#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int arr[], int n) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int freq[100000] = {0};

    // Count frequencies
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Rebuild sorted array
    int j = 0;
    for(int i = minVal; i <= maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }

    printArr(arr, n);
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);

    return 0;
}