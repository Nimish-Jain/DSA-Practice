//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int isPlaindrome(string s)
{
	int i = 0;
	int j = s.length() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string str = "abba";
	cout << isPlaindrome(str);

	return 0;
}