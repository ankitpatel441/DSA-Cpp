#include <iostream>
#include <climits>
using namespace std;

void teap(int *height, int n){
    int leftMax[20000], rightMax [20000];
   leftMax[0] = INT_MIN;
   rightMax[0] = INT_MIN;
   
   for(int i = 1; i<n; i++) {
    leftMax[i] = max(leftMax[i-1], height[i-1]);
   }

   for(int i= n-2; i>=0; i--){
    rightMax[i] = max(rightMax[i+1], rightMax[i+1]);
   }

   int waterTeaped = 0;
   for(int i)
   cout << endl;
}

int main () {
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    teap(height, n);


    return 0;
}