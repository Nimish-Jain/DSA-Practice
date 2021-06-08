//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<string> ans;

void dfs(int i, int j, string s, vector<vector<int> > &m, int n, vector<vector<bool>> &visited) {

	//check boundary conditions wether crossing the maze or not
	if (i<0 or j<0 or i >= n or j >= n)
		return;

	//base case for cell blocked or cell already visited
	if (m[i][j] == 0 or visited[i][j] == 1)
		return;

	//if we reach the last cell, i.e ans is formed
	if (i == n - 1 and j == n - 1) {
		ans.push_back(s);
		return;
	}

	//REC STARTS
	visited[i][j] = 1;

	//send in all 4 directions possible
	dfs(i - 1, j, s + "U", m , n , visited);
	dfs(i + 1, j, s + "D", m , n , visited);
	dfs(i, j - 1, s + "L", m , n , visited);
	dfs(i, j + 1, s + "R", m , n , visited);

	visited[i][j] = 0; //correcting the path
}

vector<string> findPath(vector<vector<int>> &m, int n) {
	// Your code goes here

	ans.clear();
	vector<vector<bool>> visited(n, vector<bool>(n, 0));

	if (m[0][0] = 0) //first or last pos zero ans not possible
		return ans;

	if (m[n - 1][n - 1] == 0)
		return ans;

	string s = "";

	dfs(0, 0, s, m, n, visited);
	sort(ans.begin(), ans.end());

	return ans;
}


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n = 4;
	std::vector<vector<int>> m = {{1, 0, 0, 0},
		{1, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 1, 1, 1}
	};

	vector<string> answer = findPath(m, 4);

	for (int i = 0; i < answer.size(); ++i)
		cout << answer[i] << endl;

	return 0;
}