//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void printCommonElements(int** mat, int m, int n)
{
	unordered_map<int, int> map;
	for (int j = 0; j < m; j++)
		map[mat[0][j]] = 1;
	for (int i = 1; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[mat[i][j]] == i)
			{
				map[mat[i][j]] = i + 1;
				if (i == m - 1)
					cout << mat[i][j] << " ";
			}
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int m, n; cin >> m >> n;
	int** mat = new int*[m];
	for (int i = 0; i < n; i++)
		mat[i] = new int[n];

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];
	}

	printCommonElements(mat, m, n);

	return 0;
}