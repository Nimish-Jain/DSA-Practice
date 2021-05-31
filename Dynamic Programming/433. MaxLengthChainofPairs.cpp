//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//DP Approach
int maxChainLen(struct val p[], int n) {
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
		v.push_back(make_pair(p[i].first, p[i].second));

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

//Greedy Approach
// bool comp(pair<int, int>a, pair<int, int> b) {
// 	return a.second < b.second;
// }

// int maxChainLen(struct val p[], int n) {

// 	vector<pair<int, int>> v;
// 	for (int i = 0; i < n; i++)
// 		v.push_back(make_pair(p[i].first, p[i].second));

// 	sort(v.begin(), v.end(), comp);
// 	int i = 0, j = 1;
// 	int cnt = 1;
// 	while (j < n) {
// 		if (v[i].second < v[j].first) {
// 			cnt++;
// 			i = j;
// 		}
// 		j++;
// 	}

// 	return cnt;
// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}