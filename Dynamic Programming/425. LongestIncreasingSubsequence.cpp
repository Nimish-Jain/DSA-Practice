//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int longestSubsequence(int n, int a[])
{
	// your code here
	int dp[n + 1];
	for (int i = 1; i < n + 1; i++) dp[i] = INT_MAX;
	dp[0] = INT_MIN;
	for (int i = 0; i < n; i++) {
		int idx = upper_bound(dp, dp + n + 1, a[i]) - dp;
		if (a[i] > dp[idx - 1] and a[i] < dp[idx])
			dp[idx] = a[i];
	}

	int ma = 0;
	for (int i = n; i >= 0; i--) {
		if (dp[i] != INT_MAX) {
			ma = i;
			break;
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