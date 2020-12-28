//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void reverseString(string &s) {
	int i = 0;
	int j = s.size() - 1;

	while (i < j)
	{
		swap(s[i], s[j]);
		i++;
		j--;
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s = "hello";
	reverseString(s);
	cout << s;

	return 0;
}