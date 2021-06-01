//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxSubarraySum(int arr[], int n) {

	int currSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {
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



	return 0;
}