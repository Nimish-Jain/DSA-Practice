//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int find_median(int v[], int n)
{
	sort(v, v + n);
	if (n % 2 == 0)
		return (v[n / 2] + v[(n - 1) / 2]) / 2;
	else
		return v[n / 2];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	cout << find_median(arr, n);
	return 0;
}