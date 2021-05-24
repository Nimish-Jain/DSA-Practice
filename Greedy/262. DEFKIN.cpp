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

	int t;
	int w, h, n;
	cin >> t;
	int x[40010], y[40010];

	while (t--)
	{
		cin >> w >> h >> n;
		for (int i = 0; i < n; i++)
			cin >> x[i] >> y[i];

		sort(x, x + n);
		sort(y, y + n);

		//calculate delta x and delta y
		int dx = x[0] - 1;
		int dy = y[0] - 1;

		for (int i = 1; i < n; i++) {
			dx = max(dx, x[i] - x[i - 1] - 1);
			dy = max(dy, y[i] - y[i - 1] - 1);
		}
		//edge cases when grid is ending
		dx = max(dx, w - x[n - 1]);
		dy = max(dy, h - y[n - 1]);

		cout << dx*dy << endl;
	}

	return 0;
}