//Code :: Nimish Jain
#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

bool func(int a[], int n, int mid, int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mid)
			sum += a[i] - mid;
	}
	if (sum >= m) return true;
	else return false;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m; cin >> n >> m;
	int a[n], ans = 0;
	for (int i = 0; i < n; i++) cin >> a[i];

	int lb = 0;
	int ub = *max_element(a, a + n);

	while (lb <= ub) {
		int mid = (lb + ub) / 2;
		if (func(a, n, mid, m))
		{
			ans = mid;
			lb = mid + 1;
		}
		else
			ub = mid - 1;
	}
	cout << ans;
	return 0;
}