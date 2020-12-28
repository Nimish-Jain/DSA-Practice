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
	int k; cin >> k;

	sort(arr, arr + n); //O(nlogn)
	cout << arr[k - 1];


	return 0;
}