#include <bits\stdc++.h>
using namespace std;

bool isPalindrome(char str[], int n) {
    int st = 0, ed = n-1;

    while (st < ed)
    {
       if(str[st] != str[ed]) {
        cout << "Not a Palindrome" << endl;
        return false;
       }
       st++, ed--;
    }
    cout << "Palindrome" << endl;
    return true;
}

int main() {
    char word[] = "racecar";
    int n = strlen(word);

    isPalindrome(word, n);
  
    return 0;
}
