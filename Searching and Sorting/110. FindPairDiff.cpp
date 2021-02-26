//Code :: Nimish Jain
#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		int arr[n];
		unordered_map<int, int> map;

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		for (int i = 0; i < n; ++i)
			map[arr[i]]++;

		int ans = -1;
		for (int i = 0; i < n; ++i)
		{
			int y = arr[i] + x;
			if (map[y]) {
				ans = 1;
				break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}