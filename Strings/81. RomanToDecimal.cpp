//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int romanToDecimal(string &str) {
	unordered_map<char, int> map;
	map['I'] = 1;
	map['V'] = 5;
	map['X'] = 10;
	map['L'] = 50;
	map['C'] = 100;
	map['D'] = 500;
	map['M'] = 1000;

	int ans = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (i + 1 < str.length() and map[str[i]] < map[str[i + 1]])
		{
			ans += map[str[i + 1]] - map[str[i]];
			i++;
		}
		else    ans += map[str[i]];
	}
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str = "XXV";
	cout << romanToDecimal(str);

	return 0;
}