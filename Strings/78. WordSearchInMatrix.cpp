//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int func(int i, int j, string s, char ch[6][6], int size, int idx)
{
	int found = 0;
	if (i >= 0 and j >= 0 and i < 6 and j < 6 and s[idx] == ch[i][j])
	{
		char temp = s[idx];
		ch[i][j] = 0;
		idx++;
		if (idx == size) found = 1;
		else {
			found += func(i + 1, j, s, ch, size, idx);
			found += func(i - 1, j, s, ch, size, idx);
			found += func(i, j + 1, s, ch, size, idx);
			found += func(i, j - 1, s, ch, size, idx);
		}
		ch[i][j] = temp; //Backtrack and correct idx;
	}
	return found;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s = "GEEKS";
	int size = 5;
	char ch[6][6] = {
		{'D', 'D', 'D', 'G', 'D', 'D'},
		{'B', 'B', 'D', 'E', 'B', 'S'},
		{'B', 'S', 'K', 'E', 'B', 'K'},
		{'D', 'D', 'D', 'D', 'D', 'E'},
		{'D', 'D', 'D', 'D', 'D', 'E'},
		{'D', 'D', 'D', 'D', 'D', 'G'}
	};

	int ans = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
			ans += func(i, j, s, ch, size, 0);
	}
	cout << ans;

	return 0;
}