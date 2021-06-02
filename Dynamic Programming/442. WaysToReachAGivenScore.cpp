//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

#define ll long long int

int dp[10001][4];

ll solve(int a[], int n, int i) {

	//base condition
	if (n == 0)
		return 1;   //ans is formed

	if (n<0 or i >= 3)
		return 0;

	//lookup
	if (dp[n][i] != -1)
		return dp[n][i];

	//Rec case
	int inc = 0, exc = 0;
	if (n - a[i] >= 0)
		inc = solve(a, n - a[i], i);
	exc = solve(a, n, i + 1);

	return dp[n][i] = inc + exc;

}

ll count(ll n)
{
	memset(dp, -1, sizeof(dp));
	int a[] = {3, 5, 10};

	return solve(a, n, 0);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}