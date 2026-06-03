#include <bits\stdc++.h>
using namespace std;

void RevChar(char word[], int n) {
    int st = 0, ed = n-1;

    while (st < ed)
    {
        swap(word[st], word[ed]);
        st++;
        ed--;
    }
    
}

int main() {
    char word[] = {"ankitkumarpatel"};
    RevChar(word, strlen(word));
    cout << word << endl;

    return 0;
}