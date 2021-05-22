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
		int m, n; cin >> m >> n;
		m--; n--;
		int x[m], y[n];
		for (int i = 0; i < m; i++) cin >> x[i];
		for (int j = 0; j < n; j++) cin >> y[j];

		sort(x, x + m, greater<int>());
		sort(y, y + n, greater<int>());

		int hz = 1, vt = 1;
		int ans = 0;
		int i = 0, j = 0;

		while (i < m and j < n) {
			if (x[i] > y[j]) {
				ans += x[i] * vt;
				hz++;
				i++;
			}
			else {
				ans += y[j] * hz;
				vt++;
				j++;
			}
		}

		while (i < m) {
			ans += x[i] * vt;
			i++;
		}

		while (j < n) {
			ans += y[j] * hz;
			j++;
		}
		cout << ans << endl;

	}

	return 0;
}