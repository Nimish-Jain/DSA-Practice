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

	int s, n, m; cin >> s >> n >> m;

	int sundays = s / 7;
	int daysLeftToBuy = s - sundays;
	int requFood = s * m;

	int ans = requFood / n;

	if (requFood % n != 0)
		ans++;

	if (ans <= daysLeftToBuy)
		cout << "Yes, you can survive! " << ans;
	else
		cout << "No";

	return 0;
}