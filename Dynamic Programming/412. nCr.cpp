//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int nCr(int n, int r) {
	// code here
	if (n < r)
		return 0;

	if ((n - r) < r)
		r = n - r; //calc whatever is smaller, nCr or nCn-r

	int mod = 1000000007;
	int dp[r + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;

	for (int i = 1; i < n + 1; i++) {
		for (int j = min(r, i); j > 0; j--)
			dp[j] = (dp[j] + dp[j - 1]) % mod;

	}
	return dp[r];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}