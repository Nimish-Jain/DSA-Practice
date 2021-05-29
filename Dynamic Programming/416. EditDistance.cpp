//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int func(string s, string t, int m, int n)
{
	if (m == -1) return n + 1;
	if (n == -1) return m + 1;

	if (dp[m][n] != -1) return dp[m][n];
	if (s[m] == t[n])
		return dp[m][n] = func(s, t, m - 1, n - 1);
	int a = func(s, t, m - 1, n - 1);	//Replace
	int b = func(s, t, m, n - 1); 		//Insert
	int c = func(s, t, m - 1, n);		//Remove

	return dp[m][n] = 1 + min(a, min(b, c));
}

int editDistance(string s, string t)
{
	memset(dp, -1, sizeof(dp));
	int m = s.length();
	int n = t.length();
	return func(s, t, m - 1, n - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}