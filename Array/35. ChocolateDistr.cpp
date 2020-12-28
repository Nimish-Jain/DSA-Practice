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
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) cin >> a[i];
		int m; cin >> m;
		sort(a, a + n);

		int min = INT_MAX;
		for (int i = 0; i + m - 1 < n; i++)
		{
			int d = a[i + m - 1] - a[i];
			if (d < min)
				min = d;
		}
		cout << min << endl;
	}

	return 0;
}