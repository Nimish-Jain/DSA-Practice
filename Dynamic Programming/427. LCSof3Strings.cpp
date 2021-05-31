//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[101][101][101]; //3D DP

int lcs(string &a , string &b, string &c, int i, int j, int k) {

	//base condition
	if (i == 0 || j == 0 || k == 0)
		return 0;

	//Lookup
	if (dp[i][j][k] != -1)
		return dp[i][j][k];

	//Rec Case
	if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1] && c[k - 1] == a[i - 1])
		return dp[i][j][k] = 1 + lcs(a, b, c, i - 1, j - 1, k - 1);
	else
		return dp[i][j][k] = max(lcs(a, b, c, i - 1, j, k), max(lcs(a, b, c, i, j - 1, k), lcs(a, b, c, i, j, k - 1)));
}

int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
	memset(dp, -1, sizeof(dp));
	return lcs(A, B, C, n1, n2, n3);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}