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

	int a, b, c; cin >> a >> b >> c;
	cout << a + b + c - max(max(a, b), c) - min(min(a, b), c);

	return 0;
}