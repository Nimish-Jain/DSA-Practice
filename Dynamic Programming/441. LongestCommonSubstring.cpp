//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int longestCommonSubstr (string x, string y, int m, int n)
{
	// your code here
	int dp[m + 1][n + 1];
	int ans = 0;
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			if (i == 0 or j == 0)
				dp[i][j] = 0;
		}
	}

	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (x[i - 1] == y[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
				ans = max(ans, dp[i][j]);
			}
			else
				dp[i][j] = 0;
		}
	}

	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}