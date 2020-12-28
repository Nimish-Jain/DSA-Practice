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

	int n, k; cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	if (n == 1)
		return 0;

	sort(arr, arr + n);
	int ans = arr[n - 1] - arr[0];
	int small = arr[0] + k;
	int big = arr[n - 1] - k;

	if (small > big)
		swap(small, big);

	//Traversing Middle Elements
	for (int i = 1; i < n - 1; ++i)
	{
		int sub = arr[i] - k;
		int add = arr[i] + k;

		if (sub >= small or add <= big)
			continue;

		if (big - sub <= add - small)
			small = sub;
		else
			big = add;
	}

	cout << min(ans, big - small);

	return 0;
}