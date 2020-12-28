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

	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		sort(a, a + n);
		int ans = 0;
		for (int i = 0; i < n - 2; ++i)
		{
			int l = i + 1;
			int r = n - 1;
			while (l < r)
			{
				if (a[i] + a[l] + a[r] == x) {
					ans = 1;
					break;
				}
				else if (a[i] + a[l] + a[r] < x)
					l++;
				else
					r--;
			}
			if (ans == 1)
				break;
		}

		cout << ans << endl;
	}

	return 0;
}