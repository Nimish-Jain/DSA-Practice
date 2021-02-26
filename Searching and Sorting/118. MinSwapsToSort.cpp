//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int minSwaps(vector<int>&arr) {
	int n = arr.size();
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
		v[i] = {arr[i], i};

	sort(v.begin(), v.end());
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i].second == i)
			continue;
		else {
			cnt++;
			swap(v[i], v[v[i].second]);
			i--;
		}
	}
	return cnt;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	return 0;
}