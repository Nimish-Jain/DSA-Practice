//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxProfit(int k, int n, int arr[]) {

	int dp[k + 1][n];

	for (int i = 0; i <= k; i++)
		dp[i][0] = 0;

	for (int j = 0; j < n; j++)
		dp[0][j] = 0;

	for (int i = 1; i <= k; i++) {
		int mx = INT_MIN;
		for (int j = 1; j < n; j++) {
			mx = max(mx, dp[i - 1][j - 1] - arr[j - 1]);
			dp[i][j] = max(mx + arr[j], dp[i][j - 1]);
		}
	}

	return dp[k][n - 1];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}