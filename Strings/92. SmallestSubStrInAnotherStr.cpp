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

	string s1, s2;
	cin >> s1 >> s2;

	string ans = "";
	unordered_map<char, int> map2;
	for (int i = 0; i < s2.length(); i++)
	{
		char ch = s2[i];
		map2[ch]++;
	}

	int mct = 0;
	int dmct = s2.length();
	unordered_map<char, int> map1;
	int i = -1, j = -1;
	while (true)
	{
		bool f1 = false, f2 = false;
		//acquire
		while (mct < dmct && i != s1.length() - 1)
		{
			i++;
			char ch = s1[i];
			map1[ch]++;
			// cout << map1.size() << endl;
			if (map1[ch] <= map2[ch])
				mct++;
			// cout << mct << endl;
			f1 = true;
		}
		//start shrinking from left
		//collect answer and release
		while (j < i && mct == dmct)
		{
			// cout << i << " " << j << endl;
			string pans = s1.substr(j + 1, i + 1);
			// cout << pans << endl;
			if (ans.length() == 0 or pans.length() < ans.length())
				ans = pans;
			j++;
			char ch = s1[j];
			map1[ch]--;

			if (map1[ch] < map2[ch])
				mct--;
			// cout << mct << dmct << endl;
			f2 = true;
		}
		if (f1 == false && f2 == false)
			break;
	}

	cout << ans;

	return 0;
}