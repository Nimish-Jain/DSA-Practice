//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void merge(int *arr1, int *arr2, int n, int m)
{
	int i = n - 1, j = 0;
	while (i >= 0 && j < m)
	{
		if (arr1[i] > arr2[j])
			swap(arr1[i], arr2[j]);

		i--;
		j++;

		if (arr1[i] <= arr2[j])
			break;
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n, m, i;
		cin >> n >> m;
		int arr1[n], arr2[m];
		for (i = 0; i < n; i++)
			cin >> arr1[i];

		for (i = 0; i < m; i++)
			cin >> arr2[i];

		merge(arr1, arr2, n, m);
		for (i = 0; i < n; i++)
			cout << arr1[i] << " ";

		for (i = 0; i < m; i++)
			cout << arr2[i] << " ";

		cout << endl;
	}

	return 0;
}
