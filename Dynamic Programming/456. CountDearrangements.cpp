// A Dynamic programming based C++
// program to count derangements
#include <bits/stdc++.h>
using namespace std;

int countDer(int n)
{
	// code here
	int dp[n + 1] = {0};
	long int mod = 1e9 + 7;
	// Base case
	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; i++)
		dp[i] = ((i - 1) % mod * (dp[i - 1] % mod + dp[i - 2] % mod) % mod) % mod;

	return dp[n] % mod;
}

// Driver code
int main()
{
	int n = 4;
	cout << "Count of Derangements is "
	     << countDer(n);
	return 0;
}
