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
	for (int i = 1; i < n; i++)
		for (int j = 0; j < m; j++)
			if (dist[edges[j][0]] != INT_MAX && dist[edges[j][0]] + edges[j][2] <= dist[edges[j][1]])
				dist[edges[j][1]] = dist[edges[j][0]] + edges[j][2];

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