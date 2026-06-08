#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    vector<int> vec1 = {1, 3, 3, 4, 5, 6};
    vector<int> vec2(5, -1);

    cout << "vec1: ";
    for(int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }

    cout << "\nvec2: ";
    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }

    // Add element
    vec.push_back(7);

    cout << "\nsize : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    // Delete last element
    vec.pop_back();

    cout << "size : " << vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;

    return 0;
}