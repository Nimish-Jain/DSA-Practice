//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void dfs(vector<vector<char>>& grid, int i, int j) {

	if (i < 0 or i >= grid.size() or j < 0 or j >= grid[0].size())
		return;

	if (grid[i][j] == '1') {
		grid[i][j] = -1;

		dfs(grid, i - 1, j);
		dfs(grid, i + 1, j);
		dfs(grid, i, j - 1);
		dfs(grid, i, j + 1);

		dfs(grid, i + 1, j + 1);
		dfs(grid, i - 1, j - 1);
		dfs(grid, i - 1, j + 1);
		dfs(grid, i + 1, j - 1);
	}
}


int numIslands(vector<vector<char>>& grid)
{
	// Code here
	int cnt = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			if (grid[i][j] == '1') {
				dfs(grid, i, j);
				cnt++;
			}
		}
	}

	return cnt;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}