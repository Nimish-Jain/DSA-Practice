//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int longestSubsequence(int N, int arr[])
{
	int dp[N + 1] = {0};
	int count = 0;

	for (int i = 0; i < N; i++) {
		dp[i] = 1;
		for (int j = 0; j <= i; j++) {
			if (abs(arr[i] - arr[j]) == 1)
				dp[i] = max(dp[i], dp[j] + 1);
		}
		count = max(dp[i], count);
	}

	return count;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}