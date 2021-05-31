//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxSumIS(int a[], int n)
{
	// Your code goes here
	int dp[n];
	std::copy(a, a + n, dp);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + a[i]);
		}
	}

	int ma = 0;
	for (int i = 0; i < n; i++)
		ma = max(ma, dp[i]);

	return ma;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}