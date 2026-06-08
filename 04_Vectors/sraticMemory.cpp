#include <iostream>
using namespace std;

void func() {
     // Static Memory Allocation
    int arr[100] = {1, 2, 3, 4, 5};
    
    // Print the array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    func();
   
    
    return 0;
}
