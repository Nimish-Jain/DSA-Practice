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

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}