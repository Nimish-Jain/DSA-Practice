//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

//First Approach -> Sort and then binary_search from STL O(nlogn)
//Second Approach -> Hashing using unodered_map


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		unordered_map <int, int> map;

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < m; i++)
			cin >> b[i];

		for (int i = 0; i < n; i++)
			map[a[i]]++;

		int cnt = 0;
		for (int i = 0; i < m; i++)
		{
			if (map[b[i]])
				cnt++;
		}
		// cout << cnt << endl;
		if (cnt != m)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;

	}

	return 0;
}