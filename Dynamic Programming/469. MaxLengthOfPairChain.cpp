//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int findLongestChain(vector<vector<int>>& pairs) {
	int n = pairs.size();

	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
		v.push_back(make_pair(pairs[i][0], pairs[i][1]));

	sort(v.begin(), v.end());

	int dp[n];
	for (int i = 0; i < n; i++) dp[i] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[j].second < v[i].first)
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	int ma = 0;
	for (int i = 0; i < n; i++)
		ma = max(ma, dp[i]);

	return ma;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}