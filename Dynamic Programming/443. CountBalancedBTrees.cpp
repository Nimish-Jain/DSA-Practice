//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//REAL FORMULA OF TOTAL NO. OF WAYS
// count(h) = count(h-1) * count(h-2) + count(h-2) * count(h-1) + count(h-1) * count(h-1)
// Below is derived formula of x*y + y*x + x*x = x*(2y+x);

// x*y + y*x + x*x = x*(2y+x);

long long int countBT(int h)
{
	if (h == 0 or h == 1)
		return 1;

	long long int MOD = 1000000007;

	long long int dp[h + 1];
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= h; i++)
		dp[i] = (dp[i - 1] * ((2 * dp[i - 2]) % MOD + dp[i - 1])) % MOD;

	return dp[h];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}