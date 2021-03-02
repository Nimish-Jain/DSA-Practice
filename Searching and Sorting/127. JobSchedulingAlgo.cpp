//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

static bool comp(vector<int>a , vector<int> b)
{
	return a[1] < b[1];
}
int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {

	int n = startTime.size();
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++) {
		int x = startTime[i];
		int y = endTime[i];
		int z = profit[i];
		v[i] = {x, y, z};
	}
	sort(v.begin(), v.end(), comp);
	int dp[n];
	dp[0] = v[0][2];

	for (int i = 1; i < n; i++) {
		int inc = v[i][2];
		int ans = -1;
		int low = 0;
		int high = i - 1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (v[mid][1] <= v[i][0]) {
				ans = mid;
				low = mid + 1;
			}
			else high = mid - 1;
		}
		if (ans != -1) inc += dp[ans];
		int exc = dp[i - 1];
		dp[i] = max(inc, exc);
	}
	return dp[n - 1];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}