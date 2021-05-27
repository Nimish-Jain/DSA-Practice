//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int lcs(int m, int n, string X, string Y) {

	int L[m + 1][n + 1];
	for (int i = 0; i < m + 1; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;
			else if (X[i - 1] == Y[j - 1])
				L[i][j] = 1 + L[i - 1][j - 1];
			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
	return L[m][n];
}


//DP TOP DOWN SOLUTION
// int LCS(string x, string y, int m, int n) {
// 	int dp[m + 1][n + 1];

// 	for (int i = 0; i < m + 1; i++) {
// 		for (int j = 0; j < n + 1; j++) {
// 			if (i == 0 or j == 0)
// 				dp[i][j] = 0;
// 		}
// 	}

// 	for (int i = 1; i < m + 1; i++) {
// 		for (int j = 1; j < n + 1; j++) {
// 			if (x[i - 1] == y[j - 1])
// 				dp[i][j] = 1 + dp[i - 1][j - 1];
// 			else
// 				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
// 		}
// 	}

// 	return dp[m][n];
// }



//DP MEMOISATION SOLUTION
// int dp[101][101];

// //TOP DOWN DP MEMOIZATION(IS ALWAYS TOP DOWN), MATRIX FILLING IS BOTTOM UP
// //AS WE'RE TRYING TO SOLVE SMALLER SUBPROBLEMS FIRST AND THEN REACH FINAL SOLN AT LAST BLOCK
// int LCS(string a, string b, int n, int m) {

// 	//base condition
// 	if (n == 0 or m == 0)
// 		return 0;

// 	//Lookup
// 	if (dp[n][m] != -1)
// 		return dp[n][m];

// 	//rec condition
// 	if (a[n - 1] == b[m - 1])
// 		return dp[n][m] = 1 + LCS(a, b, n - 1, m - 1);
// 	else
// 		return dp[n][m] = max(LCS(a, b, n, m - 1), LCS(a, b, n - 1, m));

// }




//LCS RECURSIVE
// int LCS(string a, string b, int n, int m) {

// 	//base condition
// 	if (n == 0 or m == 0)
// 		return 0;

// 	//rec condition
// 	if (a[n - 1] == b[m - 1])
// 		return 1 + LCS(a, b, n - 1, m - 1);
// 	else
// 		return max(LCS(a, b, n, m - 1), LCS(a, b, n - 1, m));

// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}