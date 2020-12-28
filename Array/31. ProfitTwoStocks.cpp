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

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int buy1, buy2, profit1, profit2;
	buy1 = buy2 = INT_MAX;
	profit2 = profit1 = 0;
	for (int i = 0; i < n; ++i)
	{
		buy1 = min(buy1, a[i]);
		profit1 = max(profit1, a[i] - buy1);
		buy2 = min(buy2, a[i] - profit1);
		profit2 = max(profit1, a[i] - buy2);
	}
	cout << profit2 << endl;


	return 0;
}