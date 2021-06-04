//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1001][1001];

bool solve(string A, string B, string C, int n, int m, int len) {

	//base case
	if (len == 0)
		return 1; //ans is formed

	//lookup
	if (dp[n][m] != -1)
		return dp[n][m];

	//Rec Case
	int one = 0, two = 0;

	if (n - 1 >= 0 and A[n - 1] == C[len - 1])
		one = solve(A, B, C, n - 1, m, len - 1);

	if (m - 1 >= 0 and B[m - 1] == C[len - 1])
		two = solve(A, B, C, n, m - 1, len - 1);

	return dp[n][m] = one or two;

}

bool isInterleave(string A, string B, string C) {
	int n = A.length();
	int m = B.length();
	int len = C.length();
	if (n + m != len)
		return 0;
	memset(dp, -1, sizeof(dp));
	return solve(A, B, C, n, m, len);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}