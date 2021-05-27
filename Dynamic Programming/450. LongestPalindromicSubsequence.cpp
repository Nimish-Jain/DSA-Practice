//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[101][101];

int LCS(string a, string b, int n, int m) {

	//base condition
	if (n == 0 or m == 0)
		return 0;

	//Lookup
	if (dp[n][m] != -1)
		return dp[n][m];

	//rec condition
	if (a[n - 1] == b[m - 1])
		return dp[n][m] = 1 + LCS(a, b, n - 1, m - 1);
	else
		return dp[n][m] = max(LCS(a, b, n, m - 1), LCS(a, b, n - 1, m));
}

int longestPalinSubseq (string S)
{
	// your code here
	memset(dp, -1, sizeof(dp));
	string revS = S;
	reverse(S.begin(), S.end());
	int len = S.length();
	return (LCS(S, revS, len, len));
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}