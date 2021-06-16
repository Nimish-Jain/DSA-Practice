//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

bool dfs(vector<int>&color, int node, vector<int>adj[]) {
	if (color[node] == -1)
		color[node] = 1;

	for (auto nbr : adj[node]) {
		if (color[nbr] == -1) {
			color[nbr] = 1 - color[node];
			if (!dfs(color, nbr, adj))
				return false;
		}
		else if (color[nbr] == color[node] )
			return false;
	}
	return true;
}

bool isBipartite(int V, vector<int>adj[]) {
	vector<int> color(V, -1);

	for (int i = 0; i < V; i++) {
		if (color[i] == -1) {
			if (!dfs(color, i, adj))
				return false;
		}
	}
	return true;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}