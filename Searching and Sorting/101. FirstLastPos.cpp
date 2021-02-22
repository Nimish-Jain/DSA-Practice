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
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		int firstIdx = lower_bound(a, a + n, x) - a;
		int lastIdx = upper_bound(a, a + n, x) - a - 1;

		if (firstIdx == n) cout << "-1" << endl;
		else cout << firstIdx << " " << lastIdx << endl;
	}

	return 0;
}