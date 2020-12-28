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
		int a[n];
		for (int i = 0; i < n; ++i)	cin >> a[i];

		int mi = INT_MAX;
		int s = 0; int i = 0, j = 0;
		while (i <= j and j < n)
		{
			if (s <= x and j < n)
				s = s + a[j++];

			if (s > x and i < j)
			{
				mi = min(mi, j - i);
				s = s - a[i];
				i++;
			}
		}
		cout << mi << endl;
	}

	return 0;
}