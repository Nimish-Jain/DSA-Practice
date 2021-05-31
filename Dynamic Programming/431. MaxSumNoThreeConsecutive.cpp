//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1001];

int solve(int *a, int n) {

	//base cases
	if (n == -1)
		return 0;

	if (n == 0)
		return a[0];

	if (n == 1)
		return a[1] + a[0];

	//lookup
	if (dp[n] != -1);
	return dp[n];

	//Rec case
	int one, two, three;

	one = solve(a, n - 1);
	two = a[n] + solve(a, n - 2);
	three = a[n] + a[n - 1] + solve(a, n - 3);

	return dp[n] = max(one, max(two, three));
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	memset(dp, -1, sizeof(dp));

	int a[5] = {100, 1000, 100, 1000, 1};
	int n = 5;
	cout << solve(a, n - 1);

	return 0;
}