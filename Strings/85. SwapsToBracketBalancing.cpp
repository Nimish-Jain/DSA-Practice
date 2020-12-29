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
		int n; cin >> n;
		string s; cin >> s;					//Time -> O(n), space -> O(1)
		int ans = 0; int open = 0, close = 0;
		int fault = 0;
		for (int i = 0; i <= n; i++)
		{
			if (s[i] == ']')
			{
				close++;
				fault = close - open;
			}
			else {
				open++;
				if (fault > 0)
				{
					ans += fault;
					fault--;
				}
			}
		}
		cout << ans << endl;
	}

	// int t; cin >> t;
	// while (t--)
	// {
	// 	int n; cin >> n;
	// 	string s; cin >> s;
	// 	std::vector<int> v;               //Time -> O(n), Space -> O(n)
	// 	for (int i = 0; i < n; ++i) {
	// 		if (s[i] == '[') v.push_back(i);
	// 	}

	// 	int idx = 0, cnt = 0, ans = 0;
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		if (s[i] == '[')
	// 		{
	// 			cnt++;
	// 			idx++;
	// 		}
	// 		else {
	// 			cnt--;
	// 			if (cnt < 0)
	// 			{
	// 				ans += v[idx] - i;
	// 				swap(s[i], s[v[idx]]);
	// 				cnt = 1;
	// 				idx++;
	// 			}
	// 		}
	// 	}
	// 	cout << ans << endl;
	// }
	return 0;
}