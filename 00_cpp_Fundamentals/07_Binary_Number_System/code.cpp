/*
================================================================================
BINARY NUMBER SYSTEM
================================================================================
Understand binary numbers and bitwise operations.

Topics Covered:
- Binary number representation
- Decimal to binary conversion
- Binary to decimal conversion
- Bitwise operators (&, |, ^, ~)
- Left and right shift operators
- Bit manipulation techniques

================================================================================
*/

#include <iostream>
#include <bitset>
#include <string>
using namespace std;


// Binary to Decimal
void binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1; //2^0 2^1 2^2.......

    while (n > 0) {
        int lastDig = n % 10;

        decNum += lastDig * pow;

        pow = pow * 2;
        n = n / 10;
    }

    cout << decNum << endl;
}


// Decimal to Binary
void decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int place = 1; // 10^0, 10^1, 10^2...

    while (n > 0) {
        int rem = n % 2;

        binNum += rem * place;

        place = place * 10;
        n = n / 2;
    }

    cout << binNum << endl;
}

int main() {
    // cout << sizeof(int) << endl;
    // cout << sizeof(long int) << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(long double) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(short int) << endl;
    // cout << sizeof(long long int) << endl;
    // cout << sizeof(signed int) << endl;
    // cout << sizeof(unsigned int) << endl;

    binToDec(101);
    decToBin(5);

   
    
    
    
    return 0;
}
