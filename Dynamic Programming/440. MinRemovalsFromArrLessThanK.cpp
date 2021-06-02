//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[101][101];

int solve(int a[], int i, int j, int k) {

	//base conditions
	if (i >= j) //first invalid i/p
		return 0;
	if (a[j] - a[i] <= k) //ans is formed, hence return
		return 0;

	//Lookup
	if (dp[i][j] != -1)
		return dp[i][j];

	//Rec Case
	return dp[i][j] = 1 + min(solve(a, i + 1, j, k), solve(a, i, j - 1, k));

}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int k; cin >> k;

	memset(dp, -1, sizeof(dp));
	sort(a, a + n);

	cout << solve(a, 0, n - 1, k);

	return 0;
}