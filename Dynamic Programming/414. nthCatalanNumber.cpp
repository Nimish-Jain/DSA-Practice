//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

cpp_int findCatalan(int n)
{
	//code here
	cpp_int dp[n + 1] = {0};

	dp[0] = dp[1] = 1;

	for (int i = 2; i < n + 1; i++) {
		dp[i] = 0;
		for (int j = 0; j < i; j++)
			dp[i] += dp[j] * dp[i - j - 1];
	}
	return dp[n];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}