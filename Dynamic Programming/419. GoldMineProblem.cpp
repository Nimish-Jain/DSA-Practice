//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxGold(int n, int m, vector<vector<int>> M)
{
	// code here
	int dp[n + 1][m + 1];
	memset(dp, 0, sizeof(dp));

	for (int j = m - 1; j >= 0; j--) {
		for (int i = 0; i < n; i++) {
			//last column
			if (j == m - 1)
				dp[i][j] = M[i][j];

			//first row
			else if (i == 0)
				dp[i][j] = M[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);

			//last row
			else if (i == n - 1)
				dp[i][j] = M[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);

			//first column or all other cases
			else
				dp[i][j] = M[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1], dp[i + 1][j + 1]);
		}
	}
	int ans = 0;
	//choose max element from first column as answer
	for (int i = 0; i < n; i++)
		ans = max(ans, dp[i][0]);

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