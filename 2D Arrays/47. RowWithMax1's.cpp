//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	// code here
	int res = 0;
	int idx = -1;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
			if (sum > res)
			{
				res = sum;
				idx = i;
			}
		}
	}
	return idx;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m; cin >> n >> m;
	vector<vector<int>> arr;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}

	cout << rowWithMax1s(arr, n, m);

	return 0;
}