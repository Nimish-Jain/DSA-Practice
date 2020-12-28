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

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	int i = 0; int j = n - 1;
	while (i <= j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}