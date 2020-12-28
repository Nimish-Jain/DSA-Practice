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

	string s = "0100110101";
	int n = s.length();
	int x = 0, y = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
			x++;
		else if (s[i] == '1')
			y++;
		if (x == y)
			cnt++;
	}

	if (x != y)
		cout << -1;
	else
		cout << cnt;

	return 0;
}