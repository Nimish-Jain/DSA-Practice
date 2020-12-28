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

		int l[n], r[n]; //O(n) Time, O(n) space
		int ma, mi;
		ma = l[0] = a[0];
		mi = r[n - 1] = a[n - 1];
		for (int i = 1; i < n; ++i)
		{
			if (a[i] > ma) ma = a[i];
			l[i] = ma;
		}
		for (int i = n - 2; i >= 0; i--)
		{
			if (a[i] > mi) mi = a[i];
			r[i] = mi;
		}

		int s = 0;
		for (int i = 0; i < n; ++i)
		{
			s += min(l[i], r[i]) - a[i];
		}

		cout << s << endl;

	}

	return 0;
}