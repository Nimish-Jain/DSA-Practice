//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maximumPath(int n, vector<vector<int>> M)
{
	// code here
	int dp[n][n];
	memset(dp, 0, sizeof(dp));

	//copy last row of matrix to dp, start building dp from here
	for (int i = 0; i < n; i++)
		dp[n - 1][i] = M[n - 1][i];

	//starting from the second last row
	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			int leftdown, down, rightdown;

			//if we cannot move leftwards, ie first column of matrix
			if (j > 0)
				leftdown = dp[i + 1][j - 1];

			//if we cannot move rightwards, ie last column of matrix
			if (j < n - 1)
				rightdown = dp[i + 1][j + 1];

			down = dp[i + 1][j];
			dp[i][j] = M[i][j] + max(down, max(leftdown, rightdown));

		}
	}
	int ans = 0;
	//choose max element from first row as answer
	for (int i = 0; i < n; i++)
		ans = max(ans, dp[0][i]);

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