#include <iostream>
#include <cstring>
using namespace std;

void upperCase(char word[], int n) {
    for(int i = 0; i < n; i++) {
        char ch = word[i];

        if(ch >= 'A' && ch <= 'Z') {
            continue;
        } else {
            word[i] = ch - 'a' + 'A';
        }
    }
}

void lowerCase(char word[], int n) {
    for(int i = 0; i < n; i++) {
        char ch = word[i];

        if(ch >= 'a' && ch <= 'z') {
            continue;
        } else {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main() {
    char word[] = "abcde";

    upperCase(word, strlen(word));

    cout << word << endl;

    char word1[] = "ABCDEF";

    lowerCase(word1, strlen(word1));

    cout << word1 << endl;

    return 0;
}