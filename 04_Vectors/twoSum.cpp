#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {
    int st = 0, ed = arr.size() - 1;
    int currSum = 0;
    vector<int> ans;

    while (st < ed)
    {
        currSum = arr[st] + arr[ed];
        if(currSum == target) {
            arr.push_back(st);
            arr.push_back(ed);
            return ans;
        } else if(currSum > target) {
            ed--;
        } else {
            st++;
        }
     }
     return ans;
    
}

int main () {
    vector<int> vec = {2, 5, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(vec, target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}