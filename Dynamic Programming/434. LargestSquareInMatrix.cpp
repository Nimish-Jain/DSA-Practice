//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxSquare(int n, int m, vector<vector<int>> mat) {

	int dp[n][m];
	int res = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i == 0 or j == 0)
				dp[i][j] = mat[i][j];

			else if (mat[i][j] == 1)
				dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));

			else
				dp[i][j] = 0;

			res = max(res, dp[i][j]);
		}
	}
	return res;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}