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

	string str[] = {"2", "22", "222",
	                "3", "33", "333",
	                "4", "44", "444",
	                "5", "55", "555",
	                "6", "66", "666",
	                "7", "77", "777", "7777",
	                "8", "88", "888",
	                "9", "99", "999", "9999"
	               };

	string s; cin >> s;
	string ans = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			ans += '0';
		else {
			int j = s[i] - 'A';
			ans += str[j];
		}
	}
	cout << ans;

	return 0;
}