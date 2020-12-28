//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void printString(string s, int start, int end)
{
	for (int i = start; i <= end; ++i)
	{
		cout << s[i];
	}
}

void longestPal(string s)
{
	int l, h;
	int start = 0, end = 1;

	for (int i = 1; i < s.length(); i++)
	{
		//even length substring
		l = i - 1;
		h = i;

		while (l >= 0 and h < s.length() and s[l] == s[h])
		{
			if (h - l + 1 > end)
			{
				start = l;
				end = h - l + 1;
			}
			l--;
			h++;
		}

		//odd length substring
		l = i - 1;
		h = i + 1;

		while (l >= 0 and h < s.length() and s[l] == s[h])
		{
			if (h - l + 1 > end)
			{
				start = l;
				end = h - l + 1;
			}
			l--;
			h++;
		}
	}

	printString(s, start, start + end - 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		longestPal(s);
		cout << endl;
	}

	return 0;
}