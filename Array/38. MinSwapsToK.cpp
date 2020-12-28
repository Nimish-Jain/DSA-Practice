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
		int k; cin >> k;

		int good = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] <= k)
				good++;
		}

		int mi = INT_MAX;
		int bad = 0;
		for (int i = 0; i < good; ++i)
		{
			if (a[i] > k)
				bad++;
		}

		int i = 0, j = good - 1;
		while (j < n)
		{
			mi = min(mi, bad);
			j++;
			if (j<n and a[j]>k)
				bad++;
			if (a[i] > k)
				bad--;
			i++;
		}

		if (mi == INT_MAX)
			cout << "0" << endl;
		else
			cout << mi << endl;
	}

	return 0;
}