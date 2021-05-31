//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[10005];

int solve(int n, int x, int y, int z) {

	//base case
	if (n == 0)
		return 0;

	//lookup
	if (dp[n] != -1)
		return dp[n];

	//Rec Case
	int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
	if (n >= x) op1 = solve(n - x, x, y, z);
	if (n >= y) op2 = solve(n - y, x, y, z);
	if (n >= z) op3 = solve(n - z, x, y, z);

	return dp[n] = 1 + max(op1, max(op2, op3));

}

int maximizeTheCuts(int n, int x, int y, int z) {

	memset(dp, -1, sizeof(dp));
	int ans = solve(n, x, y, z);

	if (ans < 0) return 0;
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