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

	string str;
	cin >> str;

	unordered_map<char, int> map;
	for (int i = 0; i < str.length(); i++)
	{
		map[str[i]]++;
	}

	for (auto x : map)
	{
		if (x.second > 1)
			cout << x.first << endl;
	}


	return 0;
}