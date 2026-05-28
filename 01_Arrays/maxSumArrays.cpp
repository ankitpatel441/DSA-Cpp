#include <iostream>
#include <climits>
using namespace std;

void maxSumArr1(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;

            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }

            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << "max subArray sum1 : " << maxSum << endl;
}

void maxSumArr2(int *arr, int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int currSum = 0;

        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "max subArray sum2 : " << maxSum << endl;
}

void maxSumArr3(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }

    }
    cout << "max subArray sum3 : " << maxSum << endl;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSumArr1(arr, n);
    maxSumArr2(arr, n);
    maxSumArr3(arr, n);

    return 0;
}