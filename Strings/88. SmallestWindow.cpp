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

	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		unordered_map<char, int> m;
		set<char> st;
		for (int i = 0; i < s.length(); ++i) st.insert(s[i]);
		int n = st.size();

		int i = 0, j = 1;
		m[s[i]]++;
		int cnt = 1;
		int mi = INT_MAX;
		while (i <= j and j < s.length())
		{
			if (cnt < n) //expanding window
			{
				if (m[s[j]] == 0) cnt++; //included first time
				m[s[j]]++;
				j++;
			}
			else if (cnt == n)
			{
				mi = min(mi, j - i);
				if (m[s[i]] == 1) cnt--;
				m[s[i]]--;
				i++;
			}
		}
		while (cnt == n)
		{
			mi = min(mi, j - i);
			if (m[s[i]] == 1) cnt--;
			m[s[i]]--;
			i++;
		}
		cout << mi << endl;
	}

	return 0;
}