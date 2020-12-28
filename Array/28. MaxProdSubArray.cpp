//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int maxProduct(int *arr, int n)
{
	int maxele = arr[0], minele = arr[0], prod = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < 0)
			swap(minele, maxele);

		maxele = max(arr[i], maxele * arr[i]);
		minele = min(arr[i], minele * arr[i]);

		if (maxele > prod)
			prod = maxele;
	}
	return prod;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	cout << maxProduct(arr, n) << endl;

	return 0;
}