#include <bits/stdc++.h>
using namespace std; 

int main() {
    // // string literals
    // "helloworld"
    // "codeeithaki"
    // "a"

    // Creation & Output
    // char work[] ="code";
    // char work[4] ="code";
    // char work[] =  {'c', 'o', 'd', 'e', '\0 ' };
    // char work[50] = {'c', 'o', 'd', 'e', };
    // cout << work << endl;

    // print char lenght
    // cout << strlen(work) << endl;

    //character arrays
    // char word[20];
    // cin >> word; // cin ignore whitespace
    
    // cout << "your word was : " << word << endl;

    //cin..getline
    char sentence[50];
    cin.getline(sentence, 15, ',');

    cout << "your word was : " << sentence << endl;
    cout << "length : " << strlen(sentence) << endl;




    return  0;
}