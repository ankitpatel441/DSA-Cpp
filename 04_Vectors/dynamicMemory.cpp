#include <iostream>
#include <vector>
using namespace std;

void func() {
    // Dynamic Memory Allocation using new
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    int *ptr = new int[size];
    
    for(int i = 0; i < size; i++) {
        ptr[i] = i + 1;
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    // Don't forget to free memory
    delete[] ptr;
}

int main() {
    func();
    
    
    return 0;
}
