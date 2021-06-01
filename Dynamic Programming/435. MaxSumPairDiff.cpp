//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxSumPairWithDifferenceLessThanK(int a[], int n, int k)
{
	int dp[n];
	sort(a, a + n);

	dp[0] = 0;

	for (int i = 1; i < n; i++) {
		// first give previous value to dp[i] i.e.
		// no pairing with (i-1)th element
		dp[i] = dp[i - 1];

		if (a[i] - a[i - 1] < k) {
			// update dp[i] by choosing maximum between
			// pairing and not pairing
			if (i >= 2)
				dp[i] = max(dp[i], dp[i - 2] + a[i] + a[i - 1]); //Pairing
			else
				dp[i] = max(dp[i], a[i] + a[i - 1]);  //Not Pairing
		}
	}
	return dp[n - 1];
}

//Simple Approach -> O(nlogn), O(1)
int maxSumPairWithDifferenceLessThanK(int a[], int n, int k)
{
	// Your code goes here
	sort(a, a + n, greater<int>());
	int i = 0, sum = 0;
	while (i < n - 1) {
		int diff = abs(a[i] - a[i + 1]);
		if (diff < k) {
			sum = sum + a[i] + a[i + 1];
			i = i + 2;
		}
		else
			i++;
	}
	return sum;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}