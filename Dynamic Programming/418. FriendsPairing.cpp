//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int mod = 1000000007;

long long int solve(int n, vector<long long int> &dp) {
	//base
	if (n == 1 or n == 2)
		return n;

	//lookup
	if (dp[n] != -1)
		return dp[n];

	//rec case
	long long int exc = solve(n - 1, dp) % mod;
	long long int pair = ( (n - 1) * solve(n - 2, dp) ) % mod;
	long long int ans = ( exc + pair) % mod;
	return dp[n] = ans;
}

int countFriendsPairings(int n)
{
	// code here
	vector<long long int> dp(n + 1, -1);
	return solve(n, dp);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}