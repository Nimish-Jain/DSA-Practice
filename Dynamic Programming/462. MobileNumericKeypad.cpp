//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int dp[11][26];

int mat[4][3] = {{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	{ -1, 0, -1}
};

long long solve(int i, int j, int n) {

	//base case
	if (n == 1) //solo element can only take itself
		return 1;
	//lookup
	if (dp[mat[i][j]][n] != -1)
		return dp[mat[i][j]][n]; //dp[value][length]

	long long a = 0, b = 0, c = 0, d = 0, e = 0;

	a = solve(i, j, n - 1); //take itself

	if (j - 1 >= 0 and mat[i][j - 1] != -1)
		b = solve(i, j - 1, n - 1);

	if (j + 1 <= 2 and mat[i][j + 1] != -1)
		c = solve(i, j + 1, n - 1);

	if (i - 1 >= 0 and mat[i - 1][j] != -1)
		d = solve(i - 1, j, n - 1);

	if (i + 1 <= 3 and mat[i + 1][j] != -1)
		e = solve(i + 1, j, n - 1);

	return dp[mat[i][j]][n] = a + b + c + d + e;
}

long long getCount(int N) {
	// Your code goes here
	memset(dp, -1, sizeof(dp));
	long long ans = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (mat[i][j] != -1) //for # and * cases
				ans += solve(i, j, n);
		}
	}
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}