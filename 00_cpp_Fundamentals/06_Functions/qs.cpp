#include <iostream>
using namespace std;

//Qs. WAF to find the product of 2 numbers - a & b.
// int prod(int a,  int b) {
//     return a * b;
// }

//Qs. WAF to print if a number is odd or even.
// bool isEven(int n) {
//  if(n % 2 == 0) {
//     return true;
//  } else {
//     return false;
//  }
// }

//Qs. WAF to print the factorial of a number, n.
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<= n; i++) {
//        fact  = fact * i;
//     }
//     return fact;
// }

// Qs. WAF to find the binomial coefficient for given n & r.

// ncr. =    n!
//        r! (n-r)!

// int factorial(int n) {
//     int fact = 1;

//     for(int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int binCoff(int n, int r) {

//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n - r);

//     int result = val1 / (val2 * val3);

//     return result;
// }

//Qs. Print all Primes in a Range from 2 to n.
bool isPrimes(int n) {

    if(n == 1) {
        return false;
    }

    for(int i = 2; i * i <= n; i++) {

        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void allPrimes(int n) {

    // all primes from 2 to n

    for(int i = 2; i < n; i++) {

        if(isPrimes(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {

    allPrimes(20);

    return 0;
}