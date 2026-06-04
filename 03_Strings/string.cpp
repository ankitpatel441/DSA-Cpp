#include <iostream>
#include <string>
using namespace std;

int main() {
    // //string 
    // string str = "hello";
    // cout << str[3] << endl;

    // //getline
    // string str1;
    // getline(cin, str1);
    // cout << str1 << endl;

    //for each loop
    // string str = "helloworld";

    // for(char ch: str) {
    // cout <<  ch << ",";
    // }
    // cout << endl;

    // string member functions
    string str = "codewithakki";

    // length()
    cout << str.length() << endl;

    // at()
    cout << str.at(3) << endl;

    // substr()
    cout << str.substr(1, 5) << endl;

    // find()
    cout << str.find("akki") << endl;

    return 0;
}