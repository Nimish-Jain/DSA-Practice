//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1000001];

int solve(int n, int x, int y, int z) {

	//base conditions
	if (n == 0)
		return 0;
	if (n < 0)
		return INT_MIN;

	//Lookup
	if (dp[n] != -1)
		return dp[n];

	//Rec Cases
	int a = 1 + solve(n - x, x, y, z);
	int b = 1 + solve(n - y, x, y, z);
	int c = 1 + solve(n - z, x, y, z);

	if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
		return dp[n] = 1;
	return dp[n] = 0;
}

int findWinner(int N, int X, int Y)
{
	// Your code goes here
	memset(dp, -1, sizeof(dp));
	return solve(N, X, Y, 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}