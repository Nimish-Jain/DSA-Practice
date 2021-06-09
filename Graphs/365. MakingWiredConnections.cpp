//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

void dfs(int src, vector<int> graph[], vector<int> &visited) {
	visited[src] = 1;
	for (auto nbr : graph[src]) {
		if (!visited[nbr])
			dfs(nbr, graph, visited);
	}
}

int makeConnected(int n, vector<vector<int>>& edges) {
	vector<int> graph[n];
	int size = edges.size();
	if (size < n - 1)
		return -1;

	for (int i = 0; i < edges.size(); i++) {
		graph[edges[i][0]].push_back(edges[i][1]);
		graph[edges[i][1]].push_back(edges[i][0]);
	}

	vector<int> visited(n, 0);

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			ans++;
			dfs(i, graph, visited);
		}
	}

	return ans - 1;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}