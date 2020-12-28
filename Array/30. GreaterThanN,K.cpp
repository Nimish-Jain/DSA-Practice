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
	int x = n / k;
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		map[arr[i]]++;
	}

	for (pair<int, int> i : map)
	{
		if (i.second > x)
		{
			cout << i.first << endl;
		}
	}

	return 0;
}