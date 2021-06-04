//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int KadenesAlgo(vector<int> arr, int n) {
	int currSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {
		currSum += arr[i];
		maxSum = max(maxSum, currSum);
		if (currSum < 0) currSum = 0;
	}

	return maxSum;
}

int maximumSumRectangle(int r, int c, vector<vector<int>> M) {
	// code here
	int ma = INT_MIN;

	for (int i = 0; i < r; i++) {
		vector<int> ans(c);
		for (int j = i; j < r; j++) {
			for (int col = 0; col < c; col++) {
				ans[col] += M[j][col];
			}
			ma = max(ma, KadenesAlgo(ans, c));
		}
	}

	return ma;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}