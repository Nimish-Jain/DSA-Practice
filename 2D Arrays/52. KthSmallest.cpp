//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int kthSmallest(int** mat, int n, int k)
{
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			v.push_back(mat[i][j]);
	}
	sort(v.begin(), v.end());
	return v[k - 1];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, k; cin >> n >> k;
	// int arr[n][n];
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	cout << kthSmallest(arr, n, k);

	return 0;
}