// Code :: Nimish Jain
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {

    // Your code here
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << maxSubarraySum(arr, n) << endl;

    return 0;
}