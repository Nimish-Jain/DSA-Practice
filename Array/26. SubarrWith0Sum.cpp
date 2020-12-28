//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool subArrayExists(int a[], int n)
{
	int s = 0; int f = 0;
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
		if (a[i] == 0 or map[s] or s == 0)
		{
			f = 1;
			break;
		}
		else {
			map[s] = 1;
		}
	}
	return f;
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

	cout << subArrayExists(arr, n);

	return 0;
}