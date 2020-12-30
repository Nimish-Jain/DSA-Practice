//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

string solution(string s1, string s2)
{
	string ans = "";

	unordered_map<char, int> map2;
	for (int i = 0; i < s2.length(); i++)
	{
		char ch = s2[i];
		if (map2.find(ch) == map2.end())
			map2.insert(pair<char, int>(ch, 1));
		else
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
		while (mct < dmct and i < s1.length() - 1)
		{
			i++;
			char ch = s1[i];
			if (map1.find(ch) == map1.end())
				map1.insert(pair<char, int>(ch, 1));
			else
				map1[ch]++;

			if (map1[ch] <= map2[ch])
				mct++;

			f1 = true;
		}
		//start shrinking from left
		//collect answer and release
		while (j < i and mct == dmct)
		{
			string pans = s1.substr(j + 1, i + 1);
			if (ans.length() == 0 or pans.length() < ans.length())
				ans = pans;
			j++;
			char ch = s1[j];
			if (map1[ch] == 1)
				map1.erase(ch);
			else
				map1[ch]--;

			if (map1[ch] < map2[ch])
				mct--;

			f2 = true;
		}

		if (f1 == false and f2 == false)
			break;
	}

	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s1, s2;
	cin >> s1 >> s2;

	cout << solution(s1, s2) << endl;

	return 0;
}