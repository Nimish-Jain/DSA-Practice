//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[101][101];

int sumfreq(int i, int j, int freq[]) {
	int sum = 0;
	for (int k = i; k <= j; k++)
		sum += freq[k];

	return sum;
}

int optimalBST(int keys[], int freq[], int i, int j) {

	//base case
	if (i > j)
		return dp[i][j] = 0;
	if (i == j)
		return dp[i][j] = freq[i];

	//lookup
	if (dp[i][j] != -1)
		return dp[i][j];

	//Rec Case
	int fsum = sumfreq(i, j, freq);
	int min_cost = INT_MAX;

	for (int k = i; k <= j; k++) {
		int cost = optimalBST(keys, freq, i, k - 1) + optimalBST(keys, freq, k + 1, j);
		min_cost = min(min_cost, cost);
	}
	return dp[i][j] = min_cost + fsum;
}

int optimalSearchTree(int keys[], int freq[], int n) {
	memset(dp, -1, sizeof(dp));
	return optimalBST(keys, freq, 0, n - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}