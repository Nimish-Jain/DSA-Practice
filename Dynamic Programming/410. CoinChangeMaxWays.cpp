//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

long long int dp[1001][1001];

long long int solve(int a[], int m, int n) {
	//base conditions
	if (m == -1 and n > 0)
		return 0;
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;

	//recursive conditions
	if (dp[m][n] != -1)
		return dp[m][n];

	return dp[m][n] = solve(a, m, n - a[m]) + solve(a, m - 1, n);

}

long long int count(int s[], int m, int n)
{
	dp[m + 1][n + 1];
	memset(dp, -1, sizeof(dp));
	return solve(s, m - 1, n);
}

//2nd APPROACH
// long long int count( int S[], int m, int n )
// {
//   long long int dp[n + 1] = {0};

//     dp[0] = 1;

//     for(int i = 0; i < m; i++)
//     {
//         for(int j = S[i]; j <= n; j++)
//         {
//             dp[j] += dp[j - S[i]];
//         }
//     }

//     return dp[n];
// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}