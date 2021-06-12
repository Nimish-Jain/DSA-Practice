//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

vector<int> ans;

void dfs(int src, vector<int> *adj, vector<int> &visited) {
	visited[src] = 1;
	for (auto nbr : adj[src]) {
		if (!visited[nbr])
			dfs(nbr, adj, visited);
	}
	ans.push_back(src);
}

vector<int> topoSort(int V, vector<int> adj[])
{
	// code here
	ans.clear();
	vector<int> visited(V, 0);
	for (int i = 0; i < V; i++) {
		if (!visited[i])
			dfs(i, adj, visited);
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}