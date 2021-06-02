//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1001][1001];

int solve(int a[], int n, int w) {

	//base case
	if (n == -1 and w == 0) //we have reached beginning of array and w=0 means ans is formed in middle somewhere
		return 0;
	if (n == -1) //we have reached beginning of array and w=0 means ans is not formed
		return 1e9;
	if (w == 0)
		return 0;

	//Lookup Case
	if (dp[n][w] != -1)
		return dp[n][w];

	//Rec case
	if ((n + 1) > w or a[n] == -1) //weight at curr index is > total weight hence can't be added or -1 given
		return dp[n][w] = solve(a, n - 1, w);

	int exc = solve(a, n - 1, w);
	int inc = a[n] + solve(a, n, w - (n + 1));

	return dp[n][w] = min(inc, exc);
}

int minimumCost(int a[], int n, int w) {

	memset(dp, -1, sizeof(dp));
	int ans = solve(a, n - 1, w);

	if (ans >= 1e9) return -1;
	else return ans;

}
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}