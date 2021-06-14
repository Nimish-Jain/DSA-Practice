//Code :: Nimish Jain
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int isNegativeWeightCycle(int n, vector<vector<int>>edges)
{
	int m = edges.size();
	vector<int> dist(n, INT_MAX);
	dist[0] = 0; // let 0 be the source vertex

	// relax all the edges n - 1 times
	// for (int i = 1; i < n; i++)
	// 	for (int j = 0; j < m; j++)
	// 		//dist[u] + wt < dist[v], then update
	// 		if (dist[edges[j][0]] != INT_MAX && dist[edges[j][0]] + edges[j][2] <= dist[edges[j][1]])
	// 			dist[edges[j][1]] = dist[edges[j][0]] + edges[j][2];

	for (int i = 0; i < V - 1; i++) {
		for (auto edge : edges) {
			int u = edge[0];
			int v = edge[1];
			int wt = edge[2];

			if (dist[u] + wt < dist[v])
				dist[v] = dist[u] + wt;
		}
	}

	// now check for the negative cycle
	for (int i = 1; i < n; i++)
		for (int j = 0; j < m; j++)
			if (dist[edges[j][0]] != INT_MAX && dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]])
				return true;
	return false;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif



	return 0;
}