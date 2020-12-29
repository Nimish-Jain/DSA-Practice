//Code :: Nimish Jain
#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int n = s.length();

		unordered_map<int, int> m;
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			m[s[i]]++;
			max = max(max, m[s[i]]);
		}
		if (max <= n - max + 1)
			cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}