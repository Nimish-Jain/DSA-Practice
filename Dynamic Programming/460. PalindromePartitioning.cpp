//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[501][501];

bool isPalindrome(string s, int i, int j) {
	while (i < j) {
		if (s[i] != s[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}

int solve(string str, int i, int j) {

	if (dp[i][j] != -1)
		return dp[i][j];

	if (i == j || isPalindrome(str, i, j)) {
		dp[i][j] = 0;
		return 0;
	}
	int min = INT_MAX;
	for (int k = i; k <= j - 1; k++)
	{
		int right = 0;
		if (isPalindrome(str, i, k))
			right = solve(str, k + 1, j);
		else {
			dp[i][k] = 0;
			continue;
		}
		int count = 1 + right;
		if (count < min)
			min = count;
	}
	return dp[i][j] = min;

	//2nd Approach - INTERVIEW BIT
	// 	//base condition
	// 	if (i >= j)
	// 		return 0;

	// 	if (isPalindrome(str, i, j) == 1)
	// 		return 0;

	// 	//Lookup
	// 	if (dp[i][j] != -1)
	// 		return dp[i][j];

	// 	//find k loop scheme
	// 	int ans = INT_MAX;
	// 	for (int k = i; k <= j - 1; k++) {
	// 		int left, right;

	// 		if (dp[i][k] != -1)
	// 			left = dp[i][k];
	// 		else {
	// 			left = solve(str, i, k);
	// 			dp[i][k] = left;
	// 		}

	// 		if (dp[k + 1][j] != -1)
	// 			right = dp[k + 1][j];
	// 		else {
	// 			right = solve(str, k + 1, j);
	// 			dp[k + 1][j] = right;
	// 		}

	// 		int tempans = left + right + 1;
	// 		ans = min(ans, tempans);
	// 	}

	// 	return dp[i][j] = ans;
}

int palindromicPartition(string str)
{
	// code here
	memset(dp, -1, sizeof(dp));

	int n = str.length();
	return solve(str, 0, n - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}