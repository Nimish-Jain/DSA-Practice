//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string longestCommonPrefix(vector<string>& v) {
	int mi = INT_MAX;
	if (v.size() == 0) return "";

	string c = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		int j = 0; int k = 0; int cnt = 0;
		while (j < c.size() and k < v[i].size())
		{
			if (c[j] == v[i][k]) cnt++;
			else break;
			j++;
			k++;
		}
		mi = min(mi, cnt);
	}
	return c.substr(0, mi);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	std::vector<string> strs ({"flower", "flow", "flight"});
	cout << longestCommonPrefix(strs);

	return 0;
}