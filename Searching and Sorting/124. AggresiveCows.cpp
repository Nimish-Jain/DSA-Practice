//Code :: Nimish Jain
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	FIO;

	int t; cin >> t;
	while (t--)
	{
		int n, c; cin >> n >> c;
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);
		int lb = 1;
		int ub = 1e9;
		int ans = 0;
		while (lb <= ub)
		{
			int mid = lb + (ub - lb) / 2;
			int cow = 1;
			int prevCow = a[0];
			for (int i = 1; i < n; i++)
			{
				if (a[i] - prevCow >= mid) {
					cow++;
					prevCow = a[i];
					if (c == cow) break;
				}
			}
			if (cow == c) {
				ans = mid;
				lb = mid + 1;
			}
			else ub = mid - 1;
		}
		cout << ans << endl;
	}

	return 0;
}