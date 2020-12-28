//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string countAndSay(int n) {
	if (n == 1) return "1";
	if (n == 2) return "11";
	string s = "11";
	for (int i = 3; i <= n; i++)
	{
		string t = "";
		s += '&';
		int cnt = 1;
		for (int j = 1; j < s.length(); j++)
		{
			if (s[j] != s[j - 1])
			{
				t += to_string(cnt);
				t += s[j - 1];
				cnt = 1;
			}
			else cnt++;
		}
		s = t;
	}
	return s;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << countAndSay(n);

	return 0;
}