#include <iostream>
using namespace std; 

int binSearch(int *arr, int n, int key) {
    int st = 0, ed = n - 1;
    
    while(st <= ed) {

        int mid = st + (ed - st) / 2; 
        
        if(arr[mid] == key) {
            return mid;
        } 
    
        else if (arr[mid] < key) {
            st = mid + 1; // Search the right half
        } 
        else {
            ed = mid - 1; // Search the left half
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr, n, 12) << endl;

    return 0;
}