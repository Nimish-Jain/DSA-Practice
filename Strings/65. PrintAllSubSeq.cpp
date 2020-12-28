//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void func(string t, int i, int n, string s)
{
	if (i == n)
		cout << t << endl;
	else {
		func(t, i + 1, n, s);
		t += s[i];
		func(t, i + 1, n, s);
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s; cin >> s;
	func("", 0, s.length(), s);

	return 0;
}