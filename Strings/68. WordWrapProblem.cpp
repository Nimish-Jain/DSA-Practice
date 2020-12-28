//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"
#define inf INT_MAX
using namespace std;

void printp(int p[], int n)
{
	if (p[n] == 1) cout << p[n] << " " << n << " ";
	else {
		printp(p, p[n] - 1);
		cout << p[n] << " " << n << " ";
	}
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
		int n; cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) cin >> a[i];

		int m; cin >> m;
		int space[n + 1][n + 1];
		int ls[n + 1][n + 1];
		int c[n + 1];
		int p[n + 1];

		for (int i = 1; i <= n; i++)
		{
			space[i][i] = m - a[i];
			for (int j = i + 1; j <= n; j++)
				space[i][j] = space[i][j - 1] - a[j] - 1;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (space[i][j] < 0) //negative mei infinity
					ls[i][j] = inf;
				else if (j == n and space[i][j] >= 0) //last mei zero
					ls[i][j] = 0;
				else                  //baaki sab mei square cost
					ls[i][j] = space[i][j] * space[i][j];
			}
		}
		c[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			c[i] = inf;
			for (int j = 1; j <= i; j++)
			{
				if (c[j - 1] != inf and ls[j][i] != inf and c[j - 1] + ls[j][i] < c[i])
				{
					c[i] = c[j - 1] + ls[j][i];
					p[i] = j;
				}
			}
		}

		printp(p, n);
		cout << endl;
	}

	return 0;
}