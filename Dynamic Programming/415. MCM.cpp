//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

#define ll long long

int dp[101][101];

int solve(int arr[], ll i, ll j) {

	//base condition
	if (i >= j)
		return 0;

	//Lookup
	if (dp[i][j] != -1)
		return dp[i][j];

	//find k loop scheme
	ll ans = INT_MAX;
	for (ll k = i; k <= j; k++) {
		ll tempans = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
		ans = min(ans, tempans);
		dp[i][j] = ans;
	}

	return ans;
}

int matrixMultiplication(int N, int arr[])
{
	// code here
	memset(dp, -1, sizeof(dp));
	return solve(arr, 1, N - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}