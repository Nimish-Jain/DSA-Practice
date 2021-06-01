//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

#define mod 1000000007

long long countWays(int n, int k) {
	// code here
	long long int dp[n + 1];
	memset(dp, 0, sizeof dp);
	dp[0] = 0;
	dp[1] = k;
	dp[2] = k * k;

	for (int i = 3; i <= n; i++)
		dp[i] = ((k - 1) * (dp[i - 1] + dp[i - 2])) % mod;

	return dp[n];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}