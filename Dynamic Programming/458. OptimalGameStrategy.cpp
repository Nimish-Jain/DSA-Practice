//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

#define ll long long

ll dp[1001][1001];

ll solve(int a[], int i, int j) {

	//base condition
	if (i > j)
		return 0;

	//Lookup
	if (dp[i][j] != -1)
		return dp[i][j];

	//Recursive case
	ll one = a[i] + min(solve(a, i + 2, j), solve(a, i + 1, j - 1));

	ll two = a[j] + min(solve(a, i, j - 2), solve(a, i + 1, j - 1));

	return dp[i][j] = max(one , two);
}

ll maximumAmount(int arr[], int n) {
	memset(dp, -1, sizeof(dp));
	return solve(arr, 0, n - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}