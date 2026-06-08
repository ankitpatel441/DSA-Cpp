#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//Definition
//  STL (Standard Template Library) is a collection of generic classes
//  and functions in C++ that provides ready-made containers, algorithms, and iterators for efficient programming.

int main() {

    // ================= VECTOR =================
    cout << "Vector: ";
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end());   // Algorithm: sort()

    // Iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // find()
    auto pos = find(v.begin(), v.end(), 3);
    if (pos != v.end()) {
        cout << "3 Found in Vector" << endl;
    }

    // count()
    cout << "Count of 3 = "
         << count(v.begin(), v.end(), 3) << endl;

    // reverse()
    reverse(v.begin(), v.end());

    cout << "Reversed Vector: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl << endl;

    // ================= LIST =================
    cout << "List: ";
    list<int> l = {10, 20, 30};

    for (auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << endl;

    // ================= QUEUE =================
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Queue Front: " << q.front() << endl;
    q.pop();
    cout << "After Pop Front: " << q.front() << endl;
    cout << endl;

    // ================= STACK =================
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Stack Top: " << st.top() << endl;
    st.pop();
    cout << "After Pop Top: " << st.top() << endl;
    cout << endl;

    // ================= MAP =================
    map<int, string> m;

    m[1] = "Akki";
    m[2] = "Rahul";
    m[3] = "Aman";

    cout << "Map:" << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " -> "
             << it->second << endl;
    }
    cout << endl;

    // ================= SET =================
    set<int> s = {5, 2, 8, 2, 1, 5};

    cout << "Set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}