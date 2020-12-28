//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[1001][1001];

int func(int i, int j, string s)
{
	if (i > j) return 0;
	if (i == j) return 1;
	if (dp[i][j] != -1) return dp[i][j];

	if (s[i] == s[j]) return dp[i][j] = func(i + 1, j, s) + func(i, j - 1, s) + 1;
	else return dp[i][j] = func(i + 1, j, s) + func(i, j - 1, s) - func(i + 1, j - 1, s);

}

int countPS(string str)
{
	int n = str.length();
	dp[n][n];                      //Time -> O(n^2), Space -> O(n^2)
	memset(dp, -1, sizeof(dp));

	return func(0, n - 1, str);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str = "aab";
	cout << countPS(str);

	return 0;
}