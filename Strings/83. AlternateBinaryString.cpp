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
		string s;
		cin >> s;
		int c1 = 0, c2 = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 == 1 and s[i] == '0') c1++;
			if (i % 2 == 0 and s[i] == '1') c1++;
			if (i % 2 == 1 and s[i] == '1') c2++;
			if (i % 2 == 0 and s[i] == '0') c2++;
		}

		cout << min(c1, c2) << endl;
	}

	return 0;
}