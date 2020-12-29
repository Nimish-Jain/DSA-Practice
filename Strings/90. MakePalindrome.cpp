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
	int j = 0;

	// the loop calculates lps[i] for i = 1 to n-1
	int i = 1;
	while (i < n)
	{
		if (s[i] == s[j])
		{
			j++;
			lps[i] = j;
			i++;
		}
		else // (pat[i] != pat[j])
		{
			if (j != 0)
			{
				j = lps[j - 1];
			}
			else // if (j == 0)
			{
				lps[i] = 0;
				i++;
			}
		}
	}
	return j;
}

int makePalindrome(string str)
{
	string rev = str;
	reverse(rev.begin(), rev.end());
	string newStr = str + '#' + rev;
	int lpslen = lps(newStr);
	return (str.length() - lpslen);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str = "BABABAA";
	cout << makePalindrome(str);

	return 0;
}