//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//DP MEMOISATION APPROACH
int dp[101][10001];

int solve(int arr[], int n, int sum) {
	if (sum == 0)
		return 1;
	else if (n == 0 or sum < 0)
		return 0;

	if (dp[n][sum] != -1)
		return dp[n][sum];

	return dp[n][sum] = solve(arr, n - 1, sum - arr[n - 1]) or solve(arr, n - 1, sum);
}

int equalPartition(int N, int arr[])
{
	int sum = 0;
	sum = accumulate(arr, arr + N, sum);
	memset(dp, -1, sizeof(dp));
	if (sum % 2 != 0)
		return 0;
	else
		return solve(arr, N, sum / 2);
}

//TOP DOWN APPROACH ==> REAL DP
// bool dp[101][1001];

// bool subsetSum(int arr[], int sum, int n) {

// 	bool dp[n + 1][sum + 1];

// 	//Initialisation
// 	for (int i = 0; i < n + 1; i++) {
// 		for (int j = 0; j < sum + 1; j++) {
// 			if (i == 0)
// 				dp[i][j] = false;
// 			if (j == 0)
// 				dp[i][j] = true;
// 		}
// 	}

// 	for (int i = 1; i < n + 1; i++) {
// 		for (int j = 1; j < sum + 1; j++) {
// 			if (arr[i - 1] <= j)
// 				dp[i][j] = dp[i - 1][j - arr[i - 1]] or dp[i - 1][j];
// 			else
// 				dp[i][j] = dp[i - 1][j];
// 		}
// 	}

// 	return dp[n][sum];
// }

// int equalPartition(int N, int arr[])
// {
// 	int sum = 0;
// 	sum = accumulate(arr, arr + N, sum);
// 	if (sum % 2 != 0)
// 		return 0;
// 	else {
// 		if (subsetSum(arr, sum / 2, N))
// 			return 1;
// 		else
// 			return 0;
// 	}
// }


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}