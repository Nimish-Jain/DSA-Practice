//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxSubstring(string s)
{
	// Your code goes here
	int n = s.length();

	int currSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {
		int x;
		if (s[i] == '0')
			x = 1;
		else
			x = -1;

		currSum += x;
		if (currSum < 0)
			currSum = 0;
		maxSum = max(maxSum, currSum);
	}

	return maxSum == 0 ? -1 : maxSum;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}