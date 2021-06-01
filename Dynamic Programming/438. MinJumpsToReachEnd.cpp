//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int minJumps(int arr[], int n) {

	int dp[n];
	dp[0] = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (i <= (arr[j] + j)) {
				dp[i] = min(dp[i], dp[j] + 1);
				break;
			}
		}
	}
	return dp[i];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}