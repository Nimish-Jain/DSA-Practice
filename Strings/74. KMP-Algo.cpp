//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int lps(string s)
{
	int n = s.length();

	int lps[n];
	lps[0] = 0;

	// length of the prev longest prefix suffix
	int len = 0;

	// the loop calculates lps[i] for i = 1 to n-1
	int i = 1;
	while (i < n)
	{
		if (s[i] == s[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else // (pat[i] != pat[len])
		{
			if (len != 0)
			{
				len = lps[len - 1];
			}
			else // if (len == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
	return len;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s = "aaaa";
	cout << lps(s);


	return 0;
}