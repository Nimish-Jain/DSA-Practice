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
	for (int i = 0; i < n ; ++i)
		cin >> arr[i];

	// O(nlogn) Approach
	// sort(arr, arr + n + 1);
	// for (int i = 1; i < n + 1; i++)
	// {
	// 	if (arr[i] == arr[i - 1])
	// 		cout << arr[i];
	// }

	//O(n) approach
	for (int i = 0; i < n; ++i)
		arr[arr[i] % n] = arr[arr[i] % n] + n;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] / n > 1)
			cout << i << endl;
	}

	return 0;
}