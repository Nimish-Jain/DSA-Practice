//Code :: Nimish Jain
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

bool func(int a[], int n, int par, int mid)
{
	int time = 0;
	int ptillnow = 0;
	for (int i = 0; i < n; ++i) {
		time = a[i];
		int j = 2;
		while (time <= mid) {
			ptillnow++;
			time = time + (a[i] * j);
			j++;
		}
		if (ptillnow >= par) return true;
	}
	return false;
}

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
		int par; cin >> par;
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		int lb = 0, ub = 1e8;
		int ans = 0;
		while (lb <= ub) {
			int mid = (lb + ub) / 2;
			if (func(a, n, par, mid))
			{
				ans = mid;
				ub = mid - 1;
			}
			else
				lb = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
}