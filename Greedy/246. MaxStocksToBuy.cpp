//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	std::vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
		v.push_back(make_pair(a[i], i + 1));
	sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int price = v[i].first;
		int maxStocks = v[i].second;
		if (price * maxStocks <= k) {
			ans += maxStocks;
			k = k - price * maxStocks;
		}
		else {
			ans += k / price;
			k = k - price * (k / price);
		}
	}

	cout << ans;

	return 0;
}