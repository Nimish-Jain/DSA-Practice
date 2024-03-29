//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

int knapSack(int n, int W, int val[], int wt[])
{
	// code here
	int dp[n + 1][W + 1];
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < W + 1; j++) {
			if (i == 0 or j == 0)
				dp[i][j] = 0;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < W + 1; j++) {
			if (wt[i - 1] <= j)
				dp[i][j] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	return dp[n][W];
}

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}