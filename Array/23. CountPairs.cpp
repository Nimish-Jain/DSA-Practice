//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//O(n) solution using map
int getPairsCount(int a[], int n, int k) {
	int cnt = 0;

	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		int x = k - a[i];

		if (m[x] == 0) //not present in map
			m[a[i]]++;

		else {
			cnt += m[x];

			m[a[i]]++;
		}
	}
	return cnt;
}

// O(n^2) Solution
// int getPairsCount(int arr[], int n, int k) {
// 	int cnt = 0;

// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = i + 1; j < n; j++)
// 		{
// 			if (k == (arr[i] + arr[j]))
// 				cnt++;
// 		}
// 	}
// 	return cnt;
// }

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int k; cin >> k;

	cout << getPairsCount(a, n, k);

	return 0;
}